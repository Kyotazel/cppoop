// friend

// friend : sebuah keyword yang nantinya akan membuat function bisa mengakses
// member public atau non public / private

#include <iostream>
#include <string>

using namespace std;

class IntelHero;

class StrengthHero{
    private:
        string name;
        double health;

    public:
        StrengthHero(const char* name){
            this->name = name;
            this->health = 100;
        }

        friend bool compare(const StrengthHero& hero1, const IntelHero& hero2);
        friend bool compare(const IntelHero& hero1, const StrengthHero& hero2);
};

class IntelHero{
    private:
        string name;
        double health;

    public:
        IntelHero(const char* name){
            this->name = name;
            this->health = 50;
        }

        friend bool compare(const StrengthHero& hero1, const IntelHero& hero2);
        friend bool compare(const IntelHero& hero1, const StrengthHero& hero2){
            cout << "Fungsi compare di global scope" << endl;

            return hero1.health > hero2.health;
        }
};

bool compare(const StrengthHero& hero1, const IntelHero& hero2){
    cout << "Fungsi compare di global scope" << endl;

    return hero1.health > hero2.health;
}

// bool compare(const IntelHero& hero1, const StrengthHero& hero2){
//     cout << "Fungsi compare di global scope" << endl;

//     return hero1.health > hero2.health;
// }

int main(){

    StrengthHero hero1 = StrengthHero("ucup");
    IntelHero hero2 = IntelHero("otong");

    cout << compare(hero1, hero2) << endl;
    cout << compare(hero2, hero1) << endl;

    return 0;
}
