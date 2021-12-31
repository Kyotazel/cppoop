#include <iostream>
#include <string>

using namespace std;

// Deklarasi class
class Player{
    public:
        string name;

        // dalam bentuk prototype
        Player(const char*);
        void display();
        string getName();
        void setName(const char*);
};

// Main
int main(){

    Player* playerObject = new Player("Ucup");
    playerObject->display();

    cout << "getName : " << playerObject->getName() << endl;
    playerObject->setName("Otong");
    playerObject->display();

    return 0;
}

// penjabaran method
Player::Player(const char* name){
    this->name = name;
}

void Player::display(){
    cout << "Nama Player : " << this->name << endl; 
}

string Player::getName(){
    return this->name;
}

void Player::setName(const char* name){
    this->name = name;
}