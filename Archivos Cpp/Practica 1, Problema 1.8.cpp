#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float x1, x2, y1, y2, DISTANCIA;
    cout<< "Ingresa la coordenada X del primer punto" <<endl;
    cin>>x1;
    cout << "Ingresa la coordenada Y del primer punto" <<endl;
    cin>>y1;
    cout << "Ingresa la coordenada X del segundo punto" <<endl;
    cin>>x2;
    cout << "Ingresa la coordenada Y del segundo punto" <<endl;
    cin>>y2;
    DISTANCIA = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    cout << "La distancia entre el punto ("<<  x1 << ", " << y1 << ") y el punto (" << x2 << ", " << y2 << ") es de "   << DISTANCIA <<endl;
    return 0;
}
