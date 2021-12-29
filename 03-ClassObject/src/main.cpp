#include <iostream>
#include <string>

using namespace std;

class Siswa {
    public:
        string nama;
        string NIS;
        string jurusan;
        double nilai;
};

int main(){

    Siswa data1;
    data1.nama = "ucup";
    data1.NIS = "1331212";
    data1.jurusan = "teknik";
    data1.nilai = 10;

    Siswa data2;
    data2.nama = "otong";
    data2.NIS = "13406001";
    data2.jurusan = "teknik menjahit";
    data2.nilai = 9;

    cout << "nama dari data 1 : " << data1.nama << endl;
    cout << "NIM dari data 1 : " << data1.NIS << endl;
    cout << "Jurusan dari data 1 : " << data1.jurusan << endl;
    cout << "Nilai dari data 1 : " << data1.nilai << endl;
    cout << endl << endl;
    cout << "nama dari data 2 : " << data2.nama << endl;
    cout << "NIS dari data 2 : " << data2.NIS << endl;
    cout << "Jurusan dari data 2 : " << data2.jurusan << endl;
    cout << "Nilai dari data 2 : " << data2.nilai << endl;

    cin.get();
    return 0;
}
