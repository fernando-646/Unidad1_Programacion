#include <iostream>
using namespace std;

int main() {
    int MAT;
    float PRO, CAL1, CAL2, CAL3, CAL4, CAL5;
    cout << "Porfavor ingrese la matrícula del alumno" << endl;
    cin >> MAT;
    cout << "Porfavor ingrese la primera calificacion" << endl;
    cin >> CAL1;
    cout << "Porfavor ingrese la segunda calificacion" << endl;
    cin >> CAL2;
    cout << "Porfavor ingrese la tercer calificacion" << endl;
    cin >> CAL3;
    cout << "Porfavor ingrese la cuarta calificacion" << endl;
    cin >> CAL4;
    cout << "Porfavor ingrese la quinta calificacion" << endl;
    cin >> CAL5;
    PRO = (CAL1 + CAL2 + CAL3 + CAL4 + CAL5) / 5;
    cout << "El alumno de matricula: " << MAT << " tiene un promedio de: " << PRO << endl;
    return 0;
}

