/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//92. Convertir grados Fahrenheit a Kelvin.
#include <iostream>
using namespace std;
int main() {
    double f;
    cout << "Ingrese temperatura en Fahrenheit: "; cin >> f;
    double k = (f - 32) * 5 / 9 + 273.15; // F → C → K
    cout << "Temperatura en Kelvin: " << k << endl;
    return 0;
}












