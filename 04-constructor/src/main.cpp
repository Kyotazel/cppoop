#include <iostream>
#include <string>

using namespace std;

// class tanpa constructor
class Polos {
    public:
        string dataString;
        int dataInteger;
};

// class dengan constructor
class Siswa {
    public:

        string nama;
        string NIS;
        string jurusan;
        double nilai;

        // ini adalah constructor
        // Siswa(){
        //     cout << "ini adalah constructor" << endl;
        // }

        // constructor dengan parameter
        Siswa(string inputNama, string inputNIS, string inputJurusan, double inputNilai) {
            Siswa::nama = inputNama;
            Siswa::NIS = inputNIS;
            Siswa::jurusan = inputJurusan;
            Siswa::nilai = inputNilai;

            cout << Siswa::nama << endl;
            cout << Siswa::NIS << endl;
            cout << Siswa::jurusan << endl;
            cout << Siswa::nama << endl;
        }

};

int main(){

    Siswa siswa1 = Siswa("ucup","1391304","teknik pertanian", 100);
    Siswa siswa2 = Siswa("otong","1332304","teknik peternakan", 85);
    
    // Polos objectPolos;
    // objectPolos.dataString = "polos";
    // objectPolos.dataInteger = 0;

    // cout << objectPolos.dataString << endl;
    // cout << objectPolos.dataInteger << endl;

    cin.get();
    return 0;
}
