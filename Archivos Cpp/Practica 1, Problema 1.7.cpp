#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float L1, L2, L3, S, AREA;
    cout << "Escriba la primer medida del triangulo" << endl;
    cin >> L1;
    cout << "Escriba la segunda medida del triangulo" << endl;
    cin >> L2;
    cout << "Escribe la tercer medida del triangulo" << endl;
    cin >> L3;
    S = (L1 + L2 + L3) / 2;
    AREA = sqrt(S * (S-L1) * (S-L2) * (S-L3));
    cout << "El area del triangulo es " << AREA << endl;
    return 0;
}
