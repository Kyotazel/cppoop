#include "siswa.hpp"
#include <iostream>

Siswa::Siswa(const char* name){
    this->namePublic = name;
    this->namePrivate = name;
}

void Siswa::showDisplay(){
    std::cout << "Nama siswa : " << this->namePrivate << std::endl;
}

void Siswa::showDisplayPrivate(){
    std::cout << "Nama siswa : " << this->namePrivate << std::endl;
}