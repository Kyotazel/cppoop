#include <iostream>
#include <string>
#include "player.hpp"

using namespace std;

int main(){

    Player player1 = Player("Naruto"); // ini adalah object di stack
    player1.display();

    // implementasi getter
    cout << player1.getName() << endl; // read only
    // player1.name = "Luna"; // tidak bisa write

    // kegiatan bertarung
    cout << "bertarung" << endl;
    player1.addExperience(25); // setter
    player1.display();
    player1.addExperience(50);
    player1.display();
    player1.addExperience(10);
    player1.display();
    player1.addExperience(25);

    // hasilnya
    player1.display();

    // bertarung lagi
    cout << "bertarung" << endl;
    player1.addExperience(25); // setter
    player1.display();
    player1.addExperience(50);
    player1.display();
    player1.addExperience(10);
    player1.display();
    player1.addExperience(25);

    // hasilnya
    player1.display();

    return 0;
}
