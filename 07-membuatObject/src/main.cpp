#include <iostream>
#include <string>

using namespace std;

class DenganConstructor{
    public:
        string data;

        DenganConstructor(const char* data){
            DenganConstructor::data = data;
        }

        void show(){
            cout << "ini " << DenganConstructor::data << endl;
        }
};

class TanpaConstructor{
    public:
        string data;

        void show(){
            cout << "ini " << TanpaConstructor::data << endl;
        }
};

int main(){

    // 1. Cara membuat object tanpa constructor
    TanpaConstructor object1;
    object1.data = "object 1";
    object1.show();

    // 2. Cara membuat object dengan constructor
    DenganConstructor object2 = DenganConstructor("Object 2");
    object2.show();

    // 3. cara lain membuat object dengan constructor
    DenganConstructor object3("object 3");
    object3.show();

    //4. cara membuat object pada heap memory
    DenganConstructor* object4 = new DenganConstructor("Object 4");
    (*object4).show(); // dengan cara dereference
    object4->show(); // arrow operator, mapping function atau attribute dari pointer
    string data = object4->data;
    cout << data << endl;

    DenganConstructor* object5;
    object5 = new DenganConstructor("object 5");
    object5->show();

    cin.get();
    return 0;
}
