#include <iostream>
using namespace std;

int main() {
    float SUELDO, NUEVOSUELDO, AUMENTO;
    cout<<"Programa 4, Unidad 2 :)" << endl;
    cout<<"Porfavor ingrese el salario del trabajador  " << endl;
    cin>>SUELDO;
    if (SUELDO <= 400000.0) {
        AUMENTO = SUELDO * 0.15;
        NUEVOSUELDO = SUELDO + AUMENTO;
    }
    else {
        NUEVOSUELDO = SUELDO *1.08;
    }
    cout<< "El nuevo sueldo del trabajador es de: " << NUEVOSUELDO << endl;
    return 0;
}
