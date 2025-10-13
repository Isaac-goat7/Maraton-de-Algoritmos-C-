/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//20. Calcular velocidad promedio.
#include <iostream>
using namespace std;
int main() {
    double distancia, tiempo;
    cout << "Distancia (km): "; cin >> distancia;
    cout << "Tiempo (h): "; cin >> tiempo;
    double velocidad = distancia / tiempo;
    cout << "Velocidad promedio: " << velocidad << " km/h" << endl;
    return 0;
}









