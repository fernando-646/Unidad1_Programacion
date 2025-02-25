#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    float base, altura, perimetro, area;
    cout << "Ingresa la base del rectangulo" << endl;
    cin >> base;
    cout << "Ingresa la altura del rectangulo" << endl;
    cin >> altura;
    perimetro = (base + altura) * 2 ;
    area = base * altura;
    cout << "El perimetro del rectangulo es: " << perimetro << endl;
    cout << "El area es: " << area << endl;
    return 0;
}
