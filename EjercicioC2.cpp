/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//2. Calcular el perímetro de un círculo.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double radio;
    cout << "Ingrese el radio: ";
    cin >> radio;
    double perimetro = 2 * M_PI * radio; // Fórmula del perímetro: 2πr
    cout << "El perímetro del círculo es: " << perimetro << endl;
    return 0;
}
