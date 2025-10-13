/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//98. Calcular el área de un círculo usando radio.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double radio;
    cout << "Ingrese el radio: "; cin >> radio;
    double area = M_PI * pow(radio, 2);
    cout << "Área del círculo: " << area << endl;
    return 0;
}











