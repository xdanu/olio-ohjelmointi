#include "wheel.h"
#include <string>


Wheel::Wheel(){}
Wheel::Wheel(int, std::string) {}

int Wheel::getSize(){
    return size;
}

void Wheel::setSize(int s){
    size = s;
}

std::string Wheel::getType(){
    return type;
}

void Wheel::setType(std::string t){
    type = t;
}
