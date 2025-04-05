#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Programa 5, Unidad 2 :)" << endl;
    cout << "Escribe un numero" << endl;
    cin >> a;
    if (a % 2 == 0 ) {
        cout << "El numero es par";
    }
    else if (a % 3 == 0) {
        cout << "El numero es impar y divisible por tres";
    }
    else {
        cout << "El numero es impar y no divisible por tres";}
    return 0;
}
