#include <iostream>


#include "lua.hpp"
#include "luna.h"
#include "speaker.h"
#include "lua_speaker.h"

int main()
{
    int s=0;

    lua_State *L = luaL_newstate();

    // load the libs
    luaL_openlibs(L);
    luaopen_base(L);

    //register class with Lua
    Luna<LuaSpeaker>::Register(L);

    Speaker speaker(1);
    //push a pointer to the speaker to the lua stack
    lua_pushlightuserdata(L, (void*)&speaker);
    // And set the global name of this pointer
    lua_setglobal(L,"speakerPtr");

    //load the lua script and run it
    printf("Loading lua----------\n");
    if(luaL_dofile(L, "../speakers.lua") != 0 && \
                    luaL_dofile(L, "speakers.lua") != 0){
        printf("Lua Error: %s\n", lua_tostring(L,-1));
    }

    printf("I am done with Lua in C++.\n");

    lua_close(L);

    return s;
}