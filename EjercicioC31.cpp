/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//31. Calcular el área lateral de un cilindro.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double r, h;
    cout << "Radio: "; cin >> r;
    cout << "Altura: "; cin >> h;
    double area = 2 * M_PI * r * h; // Área lateral = 2πrh
    cout << "Área lateral del cilindro: " << area << endl;
    return 0;
}




