#include <string>
#include "hero.h"

Hero::Hero(std::string name, int health){
    my_name = name;
    my_health = health;
}

std::string Hero::getName(){
    return my_name;
}

int Hero::getHealth(){
    return my_health;
}
