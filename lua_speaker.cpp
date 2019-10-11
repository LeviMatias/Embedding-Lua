//
// Created by Matias on 11/10/2019.
//

#include "lua_speaker.h"

#define method(class, name) {#name, &class::name}

//Name to use to address the class in Lua
const char LuaSpeaker::className[] = "LuaSpeaker";

//List of class properties that one can set/get from Lua
const Luna<LuaSpeaker>::PropertyType LuaSpeaker::properties[] = {
        {0,0}
};

//List of class methods to make available in Lua
const Luna<LuaSpeaker>::FunctionType LuaSpeaker::methods[] = {
        method(LuaSpeaker, Speak),
        {0,0}
};


LuaSpeaker::LuaSpeaker(lua_State *L){
    real_object = (Speaker*)lua_touserdata(L, 1);
}

LuaSpeaker::~LuaSpeaker() {
    printf("deleted Lua Object (%p)\n", this);
}


int LuaSpeaker::Speak(lua_State *L) {
    auto m = lua_tostring(L, -1);
    this->real_object->Speak(m);
    return 0;
}
