#include <iostream>
using namespace std;

int main() {
    float NOTA;
    cout<<"Programa 3, Unidad 2 :)" << endl;
    cout<<"Porfavor ingrese la calificacion " << endl;
    cin>>NOTA;
    if (NOTA >= 3.0) {
        cout << "APROBADO" << endl;
    }
    else {
        cout<<"REPROBADO" << endl;
    }
    return 0;
}
