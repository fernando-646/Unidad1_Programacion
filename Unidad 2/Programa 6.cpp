#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Programa 6, Unidad 2 :)" << endl;
    cout << "Ingresa el primer valor" << endl;
    cin >> a;
    cout << "Ingresa el segundo valor" << endl;
    cin >> b;
    cout << "Ingresa el tercer valor" << endl;
    cin >> c;
    if (a > b) {
        if (a > c) {
            if (b > c){
                cout << a << ", " << b << ", " << c << endl;
            }
            else {
                cout << a << ", " << c << ", " << b << endl;
            }
        }
        else {
            cout << c << ", " << a << ", " << b << endl;
        }
    }
    else {
        if (b > c) {
            if (a > c) {
                cout << b << ", " << a << ", " << c << endl;
            }
            else {
                cout << b << ", " << c << ", " << a << endl;
            }
        }
        else {
            cout << c << ", " << b << ", " << a << endl;
        }
    }
}
