#include <iostream>
using namespace std;

int main() {
    const float LITRO = 3.785, PRECIOLITRO = 8.20;
    float GAL, TOTAL;
    cout << "Escriba la cantidad de galones comprados" << endl;
    cin >> GAL;
    TOTAL = GAL * LITRO * PRECIOLITRO;
    cout << "El cliente ha comprado " << GAL << " y el total a pagar es de: " << TOTAL << endl;
    return 0;
}
