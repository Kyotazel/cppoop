#include <iostream>
#include <string>

using namespace std;

class Siswa{
    public:
        string nama;
        double nilai;

        Siswa(string nama, double nilai){
            Siswa::nama = nama;
            Siswa::nilai = nilai;
        }

        // method tanpa parameter dan tanpa return
        void tampilkanData(){
            cout << "Nama saya : " << nama << ", Nilai saya : " << nilai << endl;
        }

        // method dengan parameter dan tanpa return
        void ubahNama(const char* namaBaru) {
            Siswa::nama = namaBaru;
        }

        // method tanpa parameter dan dengan return
        string getNama() {
            return Siswa::nama;
        }
        double getNilai() {
            return nilai;
        }

        // method dengan parameter dan dengan return
        double katrolNilai(const double &tambahanNilai) {
            return Siswa::nilai + tambahanNilai;
        }
};



int main(){

    Siswa siswa1 = Siswa("ucup", 7.5);
    Siswa siswa2 = Siswa("otong", 10.0);

    siswa1.tampilkanData();
    siswa2.tampilkanData();

    siswa1.ubahNama("Mario");
    siswa1.tampilkanData();

    string dataNama = siswa1.getNama();
    cout << "dataNama : " << dataNama << endl;
    cout << "dataNilai : " << siswa1.getNilai() << endl;
    cout << "nilai akhir : " << siswa2.katrolNilai(-2.0) << endl;

    cin.get();
    return 0;
}
