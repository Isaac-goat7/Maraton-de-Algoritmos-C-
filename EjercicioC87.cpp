/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//87. Calcular el área de un círculo a partir de su radio.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double radio;
    cout << "Radio: "; cin >> radio;
    double area = M_PI * pow(radio, 2);
    cout << "Área del círculo: " << area << endl;
    return 0;
}











