#include <iostream>
#include <string>

using namespace std;

class Hero{
    public:
        string name;

    public:
        Hero(const char* name){
            this->name = name;
        }

        // setter
        void setName(const char* name){
            this->name = name;
        }

        // getter
        string getName() const {
            return this->name;
        }

        void display() const {
            cout << "Name : " << this->name << endl;
        }
};

int main(){

    Hero hero1 = Hero("Otong");
    const Hero hero2 = Hero("Ucup"); // object konstan tidak bisa dirubah

    hero1.display();
    hero1.name = "Mario"; // ini bisa
    hero1.display();
    // hero1.setName("Saitama"); // ini bisa
    hero1.display();


    hero2.display();
    // hero2.name = "Mario"; // ini tidak bisa
    hero2.display();
    // hero2.setName("Mario"); // ini tidak bisa
    hero2.display();
    cout << hero2.getName() << endl;

    // kesimpulan
    // 1. Jika objectnya tidak const, maka seluruh member dpat dipanggil
    // 2. Jika objectnya const, hanya method yang dapat dipanggil

    return 0;
}
