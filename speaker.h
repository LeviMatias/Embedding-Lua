//
// Created by Matias on 11/10/2019.
//

#ifndef LUAEMBED_SPEAKER_H
#define LUAEMBED_SPEAKER_H

#include <iostream>
#include "luna.h"

class Mouth{
public:
    void Speak(std::string m);
};

class Speaker {
    Mouth mouth;
    int id;

public:

    explicit Speaker(int id);

    void Speak(std::string m);

};


#endif //LUAEMBED_SPEAKER_H
