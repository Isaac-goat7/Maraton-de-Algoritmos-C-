/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//86. Calcular el tiempo de reacción en un experimento simple.
#include <iostream>
using namespace std;
int main() {
    double distancia, velocidad;
    cout << "Distancia recorrida (m): "; cin >> distancia;
    cout << "Velocidad de reacción (m/s): "; cin >> velocidad;
    double tiempo = distancia / velocidad;
    cout << "Tiempo de reacción: " << tiempo << " s" << endl;
    return 0;
}










