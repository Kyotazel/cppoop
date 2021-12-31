#include <iostream>
#include <string>

#include "siswa.hpp"

using namespace std;

int main(){

    Siswa* siswa1 = new Siswa("Ucup");
    // kita akan coba akses data public dan private
    cout << siswa1->namePublic << endl; // karena public dapat diakses
    // cout << siswa1->namePrivate << endl; // karena private hanya dapat diakses didalam class

    Siswa* siswa2 = new Siswa("Otong");
    siswa2->showDisplay();

    Siswa* siswa3 = new Siswa("John");
    siswa3->showDisplay();

    return 0;
}
