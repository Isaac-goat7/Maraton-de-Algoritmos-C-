/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//84. Calcular la densidad de un cuerpo (D = m / V)
#include <iostream>
using namespace std;
int main() {
    double masa, volumen;
    cout << "Masa (kg): "; cin >> masa;
    cout << "Volumen (m^3): "; cin >> volumen;
    double densidad = masa / volumen;
    cout << "Densidad: " << densidad << " kg/m^3" << endl;
    return 0;
}










