/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//40. Calcular el área de un triángulo equilátero.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double lado;
    cout << "Lado: "; cin >> lado;
    double area = (sqrt(3) / 4) * pow(lado, 2);
    cout << "Área del triángulo equilátero: " << area << endl;
    return 0;
}









