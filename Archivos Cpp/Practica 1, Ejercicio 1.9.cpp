#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int A, CUA, CUB;
    cout << "Ingrese el valor del numero" << endl;
    cin >> A;
    CUA = (A * A);
    CUB = (A * A * A);
    cout << "El valor de "<< A << " es " << CUA << " y su valor al cubo es: " << CUB << endl;
    return 0;
}
