#include <iostream>
#include <string>

// eksternal definition
#include "player.h"

using namespace std;

int main(){

    Player* playerObject = new Player("Ucup");
    playerObject->display();

    cout << "getName : " << playerObject->getName() << endl;
    playerObject->setName("Otong");
    cout << "Rubah Nama" << endl;
    playerObject->display();

    return 0;
}

