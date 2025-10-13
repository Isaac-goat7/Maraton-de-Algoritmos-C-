/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//29. Calcular el volumen de una esfera.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double r;
    cout << "Radio: "; cin >> r;
    double volumen = (4.0 / 3) * M_PI * pow(r, 3); // (4/3)πr³
    cout << "Volumen de la esfera: " << volumen << endl;
    return 0;
}



