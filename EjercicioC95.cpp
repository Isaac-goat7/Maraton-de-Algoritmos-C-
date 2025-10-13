/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//95. Calcular el área de un círculo usando su diámetro.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double diametro;
    cout << "Ingrese el diámetro del círculo: "; cin >> diametro;
    double radio = diametro / 2;
    double area = M_PI * pow(radio, 2);
    cout << "Área del círculo: " << area << endl;
    return 0;
}










