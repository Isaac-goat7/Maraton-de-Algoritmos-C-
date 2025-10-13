/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//112. Determinar si un número es positivo, negativo o cero (versión usando switch con signo).
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    switch((n > 0) - (n < 0)) { // Calcula el signo: 1 positivo, -1 negativo, 0 cero
        case 1: cout << "Número positivo" << endl; break;
        case -1: cout << "Número negativo" << endl; break;
        case 0: cout << "Número cero" << endl; break;
    }
    return 0;
}
