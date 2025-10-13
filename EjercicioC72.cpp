/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//72. Calcular el área de un hexágono regular.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double lado;
    cout << "Ingrese el lado del hexágono: "; cin >> lado;
    double area = ((3 * sqrt(3)) / 2) * pow(lado, 2); // Fórmula del hexágono regular
    cout << "Área del hexágono: " << area << endl;
    return 0;
}


