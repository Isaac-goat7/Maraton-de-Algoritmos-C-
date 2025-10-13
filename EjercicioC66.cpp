/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//66. Calcular la energía potencial.
#include <iostream>
using namespace std;
int main() {
    double masa, gravedad = 9.81, altura;
    cout << "Masa (kg): "; cin >> masa;
    cout << "Altura (m): "; cin >> altura;
    double energia = masa * gravedad * altura;
    cout << "Energía potencial: " << energia << " J" << endl;
    return 0;
}
















