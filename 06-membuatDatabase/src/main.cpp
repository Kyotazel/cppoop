#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Siswa {
    public:
        string nama;
        string NIS;
        string jurusan;

        Siswa(string nama, string NIS, string jurusan){
            Siswa::nama = nama;
            Siswa::NIS = NIS;
            Siswa::jurusan = jurusan;
        }

        string stringify() {
            return "\n" + nama + " " + NIS + " " + jurusan;
        }
};

class DBase {
    public:
        ifstream in;
        ofstream out;
        string fileName;

        DBase(const char* fileName) {
            DBase::fileName = fileName;
        }

        void save(Siswa myData) {
            cout << myData.nama << endl;
            cout << myData.NIS << endl;
            cout << myData.jurusan << endl;

            DBase::out.open(DBase::fileName, ios::app);
            DBase::out << myData.stringify();
            DBase::out.close();
        }

        void showAll(){
            DBase::in.open(DBase::fileName, ios::in);
            string nama, NIS, jurusan;
            int index = 1;

            while(!DBase::in.eof()){
                DBase::in >> nama;
                DBase::in >> NIS;
                DBase::in >> jurusan;
                cout << index++ << ".\t" << nama << "\t\t" << NIS << "\t" << jurusan << endl;
            }
            DBase::in.close();
        }
};

int main(){

    DBase database = DBase("data.txt");
    database.showAll();

    // input user
    string nama, NIS, jurusan;
    cout << "MASUKKAN DATA SISWA : " << endl;
    cout << "nama : ";
    cin >> nama;
    cout << "NIS : ";
    cin >> NIS;
    cout << "jurusan : ";
    cin >> jurusan;

    // membuat object yang diperlukan dan save ke database
    Siswa dataSiswa = Siswa(nama,NIS,jurusan);

    // save data ke database
    database.save(dataSiswa);

    // tampilkan seluruh data di database

    cin.get();
    return 0;
}
