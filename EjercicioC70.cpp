/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//70. Calcular el volumen de un cono.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double r, h;
    cout << "Radio: "; cin >> r;
    cout << "Altura: "; cin >> h;
    double volumen = (M_PI * pow(r, 2) * h) / 3;
    cout << "Volumen del cono: " << volumen << endl;
    return 0;
}
