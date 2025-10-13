/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//85. Calcular el índice de masa corporal (IMC).
#include <iostream>
using namespace std;
int main() {
    double peso, altura;
    cout << "Peso (kg): "; cin >> peso;
    cout << "Altura (m): "; cin >> altura;
    double imc = peso / pow(altura, 2);
    cout << "IMC: " << imc << endl;
    return 0;
}










