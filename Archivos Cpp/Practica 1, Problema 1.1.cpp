#include <iostream>
using namespace std;
int main() {

    float PRECIOPRO, PAGO, CAMBIO;
    cout << "Ingrese el costo del producto" << endl;
    cin >> PRECIOPRO;
    cout << "Ingrese cuanto dinero le dio el cliente" << endl;
    cin >> PAGO;
    CAMBIO = PAGO - PRECIOPRO;
    cout << "El cambio es " << CAMBIO << endl;
    return 0;
}
