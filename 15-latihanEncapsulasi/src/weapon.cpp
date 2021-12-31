#include "weapon.hpp"
#include <iostream>
#include <string>

Weapon::Weapon(const char* name, double attackPower){
    this->name = name;
    this->attackPower = attackPower;
}

void Weapon::display(){
    std::cout << "Weapon ini adalah : " << this->name;
    std::cout << ", power : " << this->attackPower << std::endl;
}

std::string Weapon::getName(){
    return this->name;
}