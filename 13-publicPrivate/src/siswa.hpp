#ifndef __SISWA
#define __SISWA

#include <iostream>
#include <string>

class Siswa{
    public: // ini dapat diakses oleh siapapun
        std::string namePublic;

    private: // ini hanya dapat diakses oleh class
        std::string namePrivate;

    public:
        Siswa(const char*);

        void showDisplay();

    private:
        void showDisplayPrivate();
};

#endif