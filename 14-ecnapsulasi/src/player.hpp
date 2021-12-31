#ifndef __PLAYER
#define __PLAYER

#include <string>
#include <iostream>

class Player{
    private:
        std::string name;
        double attackPower;
        int exp;
        int level;

    public:
        Player(const char* name);
        std::string getName();
        void addExperience(int);
        void display();
        
};

#endif