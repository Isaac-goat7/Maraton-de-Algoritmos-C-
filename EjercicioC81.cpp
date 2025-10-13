/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//81. Calcular el área de un círculo a partir de su circunferencia.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double circunferencia;
    cout << "Ingrese la circunferencia del círculo: "; cin >> circunferencia;
    double radio = circunferencia / (2 * M_PI);
    double area = M_PI * pow(radio, 2);
    cout << "Área del círculo: " << area << endl;
    return 0;
}








