/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//80. Calcular el área de un triángulo escaleno con fórmula de Herón.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    cout << "Ingrese los lados a, b, c: "; cin >> a >> b >> c;
    double s = (a + b + c) / 2; // Semiperímetro
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "Área del triángulo escaleno: " << area << endl;
    return 0;
}








