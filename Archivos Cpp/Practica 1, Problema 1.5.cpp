#include <iostream>
using namespace std;

int main() {
    float RADIO, ALTURA, VOLUMEN, AREA;
    cout << "Ingresa el valor del radio" << endl;
    cin >> RADIO;
    cout << "Ingresa el valor del altura" << endl;
    cin >> ALTURA;
    VOLUMEN = (3.14159 * (RADIO * RADIO) * ALTURA);
    AREA = (2 * 3.14159 * (RADIO * ALTURA));
    cout << "El valor del area es " << AREA << " y el valor del volumen es de " << VOLUMEN << endl;
    return 0;
}
