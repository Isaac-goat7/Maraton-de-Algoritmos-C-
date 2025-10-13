/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//44. Calcular la suma de los dígitos de un número de dos cifras.
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Número (2 cifras): ";
    cin >> num;
    int decenas = num / 10; // Primer dígito
    int unidades = num % 10; // Segundo dígito
    cout << "Suma de dígitos: " << decenas + unidades << endl;
    return 0;
}











