//
// Created by Matias on 11/10/2019.
//

#include "speaker.h"

void Mouth::Speak(std::string m) {
    std::cout<<m<<std::endl;
}

Speaker::Speaker(int id) {
    this->id = id;
}

void Speaker::Speak(std::string m) {
    this->mouth.Speak("I am speaker "+std::to_string(this->id)+" and I say: "+m);
}
