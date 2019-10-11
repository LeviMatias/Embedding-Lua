//
// Created by Matias on 11/10/2019.
//

#ifndef LUAEMBED_LUA_SPEAKER_H
#define LUAEMBED_LUA_SPEAKER_H

#include "lua.hpp"
#include "luna.h"
#include "speaker.h"

class LuaSpeaker {
public:
    // Constants
    static const char className[];
    static Luna<LuaSpeaker>::RegType methods[];

    // Initialize the pointer
    explicit LuaSpeaker(lua_State *L);

    ~LuaSpeaker();

    void setObject(lua_State *L);

    // Methods we will need to use
    void Speak(lua_State *L);
private:
    // The pointer to the 'real object' defined in object.cc
    Speaker* real_object;
};


#endif //LUAEMBED_LUA_SPEAKER_H
