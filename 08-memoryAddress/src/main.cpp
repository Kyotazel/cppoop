#include <iostream>
#include <string>
#include <chrono>

using namespace std;

using Clock = std::chrono::high_resolution_clock;
using TimePoint = std::chrono::time_point<Clock>;

class Kosong{
    public:
        int data(){
            return 1;
        }
};

class Isi{
    public:
        int dataInt1; // 4 byte
        int dataInt2;
        double dataDouble;
        string data = "apalah";

        void setDataInt(int data){
            Isi::dataInt1 = data;
        }
};

class Siswa{
    public:
        string nama;

        Siswa(const char* nama){
            Siswa::nama = nama;
        }
};

int main(){

    // besaran memory untuk sebuah object
    // Kita akan menampilkan besar memory dari class kosong
    
    cout << "Alokasi class kosong adalah : " << sizeof(Kosong) << " byte" << endl;
    cout << "Alokasi class isi adalah : " << sizeof(Isi) << " byte" << endl;

    // address
    string a;
    string b;
    Siswa object1 = Siswa("ucup");
    Siswa* object2 = new Siswa("otong");
    string c;
    string d;
    cout << "\nAddress stack" <<endl;
    cout << &a << endl;
    cout << &b << endl;
    cout << &object1 << endl;
    cout << &object2 << endl;
    cout << object2 << endl;
    cout << &c << endl;
    cout << &d << endl;

    // Seberapa cepat kita membuat object di masing - masing memory

    TimePoint *tStackStart = new TimePoint();
    TimePoint *tStackEnd = new TimePoint();
    TimePoint *tHeapStart = new TimePoint();
    TimePoint *tHeapEnd = new TimePoint();

    *tStackStart = Clock::now();
    Siswa object3 = Siswa("ucup");
    *tStackEnd = Clock::now();

    cin.get();

    *tHeapStart = Clock::now();
    Siswa* object4 = new Siswa("otong");
    *tHeapEnd = Clock::now();

    chrono::duration<double> durasi = *tStackEnd - *tStackStart;
    cout << "Waktu pembuatan object di stack adalah : " << durasi.count() << endl;
    durasi = *tHeapEnd - *tHeapStart;
    cout << "Waktu pembuatan object di heap adalah : " << durasi.count() << endl;

    return 0;
}
