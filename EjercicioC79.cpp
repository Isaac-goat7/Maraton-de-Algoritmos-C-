/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//79. Calcular el área de un triángulo isósceles.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double base, lado;
    cout << "Ingrese la base: "; cin >> base;
    cout << "Ingrese el lado: "; cin >> lado;
    double altura = sqrt(pow(lado, 2) - pow(base / 2, 2)); // Altura usando Pitágoras
    double area = (base * altura) / 2;
    cout << "Área del triángulo isósceles: " << area << endl;
    return 0;
}







