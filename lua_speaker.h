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
    // Initialize the pointer
    explicit LuaSpeaker(lua_State *L);

    ~LuaSpeaker();

    // Methods we will need to use
    int Speak(lua_State *L);

    // Constants
    static const char className[];
    static const Luna<LuaSpeaker>::PropertyType properties[];
    static const Luna<LuaSpeaker>::FunctionType methods[];

private:
    // The pointer to the 'real object' defined in object.cc
    Speaker* real_object;
};


#endif //LUAEMBED_LUA_SPEAKER_H
