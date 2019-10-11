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
    LuaSpeaker(lua_State *L);

    void Speak(lua_State *L);
};


#endif //LUAEMBED_LUA_SPEAKER_H
