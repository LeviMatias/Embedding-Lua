//
// Created by Matias on 11/10/2019.
//

#include "lua_speaker.h"

LuaSpeaker::LuaSpeaker(lua_State *L) {
    real_object = (Speaker*)lua_touserdata(L, 1);
}

LuaSpeaker::~LuaSpeaker() {
    printf("deleted Lua Object (%p)\n", this);
}

void LuaSpeaker::setObject(lua_State *L) {
    real_object = (Speaker*)lua_touserdata(L, 1);
}

void LuaSpeaker::Speak(lua_State *L) {
    this->real_object->Speak(lua_tostring(L, 1));
}
