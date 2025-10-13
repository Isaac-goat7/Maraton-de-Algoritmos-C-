/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//99. Calcular la velocidad si se conoce distancia y tiempo.
#include <iostream>
using namespace std;
int main() {
    double distancia, tiempo;
    cout << "Ingrese distancia (km): "; cin >> distancia;
    cout << "Ingrese tiempo (h): "; cin >> tiempo;
    double velocidad = distancia / tiempo;
    cout << "Velocidad promedio: " << velocidad << " km/h" << endl;
    return 0;
}











