#include <iostream>
using namespace std;

int main() {
    string NOM;
    float PES, LONG, LONGMTS, PESKG;
    cout << "Ingresa el nombre del dinosaurio" << endl;
    cin >> NOM;
    cout << "Ingresa el peso de " << NOM << " en libras" << endl;
    cin >> PES;
    cout << "Escribe la longitud de " << NOM << " en pies" << endl;
    cin >> LONG;

    PESKG = PES * 1000;
    LONGMTS = LONG * 0.3047;
    cout << "El peso del dinosaurio " << NOM << " es de " << PESKG << "KG" << " y su longitud en metros es de " << LONGMTS << "M"<< endl;
    return 0;
}
