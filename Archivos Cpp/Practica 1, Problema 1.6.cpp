#include <iostream>
using namespace std;

int main() {
    int DIAS, SEGUNDOS;
    cout << "Ingresa la cantidad de dias a calcular en segundos" << endl;
    cin >> DIAS;
    SEGUNDOS = DIAS * 24*60*60;
    cout << "En " << DIAS << " dias hay " << SEGUNDOS << " segundos " << endl;
    return 0;
}
