/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//71. Calcular el área de un pentágono regular.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double lado, apotema;
    cout << "Ingrese el lado del pentágono: "; cin >> lado;
    cout << "Ingrese el apotema: "; cin >> apotema;
    double area = (5 * lado * apotema) / 2; // Área = (Perímetro * Apotema) / 2
    cout << "Área del pentágono: " << area << endl;
    return 0;
}

