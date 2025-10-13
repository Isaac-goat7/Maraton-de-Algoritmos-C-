/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//82. Calcular el tiempo de caída libre de un objeto (ignora resistencia del aire).
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double altura, g = 9.81;
    cout << "Ingrese altura (m): "; cin >> altura;
    double tiempo = sqrt((2 * altura) / g);
    cout << "Tiempo de caída: " << tiempo << " segundos" << endl;
    return 0;
}








