#ifndef __PLAYER
#define __PLAYER
#include <string>

// Deklarasi class
class Player{
    public:
        std::string name;

        // dalam bentuk prototype
        Player(const char*);
        void display();
        std::string getName();
        void setName(const char*);
};

#endif