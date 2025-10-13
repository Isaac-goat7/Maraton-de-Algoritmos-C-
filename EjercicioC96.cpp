/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//96. Calcular el volumen de una esfera.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double radio;
    cout << "Ingrese el radio de la esfera: "; cin >> radio;
    double volumen = (4.0 / 3.0) * M_PI * pow(radio, 3);
    cout << "Volumen de la esfera: " << volumen << endl;
    return 0;
}










