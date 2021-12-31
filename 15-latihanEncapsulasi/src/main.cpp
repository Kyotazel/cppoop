#include <iostream>
#include <string>
#include "player.hpp"
#include "weapon.hpp"

using namespace std;

int main(){

    Player* player1 = new Player("Sniper");
    Weapon* weapon1 = new Weapon("Senapan",50);

    // implementasi setter unutk mengEquip weapon
    player1->equipWeapon(weapon1);

    player1->display();

    return 0;
}
