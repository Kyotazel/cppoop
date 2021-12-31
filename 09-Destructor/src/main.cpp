#include <iostream>
#include <string>

using namespace std;

class Player{
    public:
        string nama;

        // Constructor
        Player(const char* nama){
            Player::nama = nama;
            cout << "Player " << Player::nama << " dibuat" << endl;
        }

        // Destructor
        ~Player(){
            cout << "Player " << Player::nama << " dihapus" << endl;
        }
};

void membuatPlayerStack(){
    Player stackPlayer = Player("stack");
}

void membuatPlayerHeap(){
        Player* heapPlayer = new Player("heap");
        delete heapPlayer;
}

void membuatPlayerStackPointer(Player* &playerPointer){
    Player stackPlayer = Player("stack");
    playerPointer = &stackPlayer;
}

void membuatPlayerHeapPointer(Player* &playerPointer){
    Player* heapPlayer = new Player("heap");
    playerPointer = heapPlayer;
    // delete heapPlayer;
}

Player createStackPlayer(){
    Player stackPlayer = Player("stack di create");
    return stackPlayer;
}

Player* createHeapPlayer(){
    Player* heapPlayer = new Player("heap di create");
    return heapPlayer;
}

int main(){

    membuatPlayerStack();
    membuatPlayerHeap();

    // simulasi memory leak
    cout << "\nMemory Leak" << endl;
    Player* playerPointer1;
    membuatPlayerStackPointer(playerPointer1);
    // cout << (*playerPointer1).nama << endl; // tidak terjadi apa-apa

    Player* playerPointer2;
    membuatPlayerHeapPointer(playerPointer2);
    cout << playerPointer2->nama << endl; // leak memory
    playerPointer2->nama = "acak-acakan";
    cout << playerPointer2->nama << endl; // leak memory
    delete playerPointer2;

    cout << "\nReturn Object" << endl;
    Player playerReturnStack = createStackPlayer();
    cout << playerReturnStack.nama << endl;
    
    Player* playerReturnHeap = createHeapPlayer();
    cout << playerReturnHeap->nama << endl;
    delete playerReturnHeap;
    
    return 0;
}
