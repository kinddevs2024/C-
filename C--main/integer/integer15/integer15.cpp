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

    cout << "Raqamlar teskarisi: " << onlik  << yuzlik << birlik << endl;

      int yangi_son = birlik*100 + onlik * 1 + yuzlik*10;
        cout << "Raqamlar teskarisi: " << yangi_son << endl;
  aaa
    return 0;
}
