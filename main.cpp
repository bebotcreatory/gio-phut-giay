#include <iostream>
using namespace std;

int main(){
    int n, gio, phut, giay;
    cin >> n;
    /*gio = n / 3600;*/
    phut = n / 60 % 60;
    giay = n % 60;
    cout << gio << " gio: " << phut << " phut: " << giay << " giay: " << endl;
}
