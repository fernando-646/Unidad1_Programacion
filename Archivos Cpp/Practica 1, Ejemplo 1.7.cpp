#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int A, B;
    float C;
    cout << "Hola este es el programa 1.7 Para escribir el valor de la expresion" << endl;
    cout << "Porfavor ingrese el valor de A" << endl;
    cin >> A;
    cout << "Porfavor ingrese el valor de B" << endl;
    cin >> B;
    C = ((A + B) * (A + B)) / 3.0;
    printf("El resultado es: %5.4f\n", C);
    cout << "El resultado es: " << C << endl;
    return 0;
}

