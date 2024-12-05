#include <iostream>
using namespace std;

int main() {
    int son;

    cout << "Uch xonali son kiriting: ";
    cin >> son;

    //ishlash
    if (son >= 100 && son <= 999) {
        int yuzlik = son / 100;  
        int onlik = (son / 10) % 10;  
        int birlik = son % 10;          

        cout << "Raqamlar teskarisi: " << birlik << onlik << yuzlik << endl;
    } else {
        cout << "Kiritilgan son uch xonali emas!" << endl;
    }

    return 0;
}
