#include <iostream>
using namespace std;

int main() {
    int son;

    cout << "Uch xonali son kiriting: ";
    cin >> son;

    //ishlash
    int yuzlik = son / 100;  
    int onlik = (son / 10) % 10;  
    int birlik = son % 10;          

    cout << "Raqamlar teskarisi: " << birlik << yuzlik << onlik << endl;


    return 0;
}
