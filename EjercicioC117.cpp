/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//117. Mostrar si un número es positivo par o negativo impar.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n > 0 && n % 2 == 0) {
        cout << "Positivo y par" << endl;
    } else if(n < 0 && n % 2 != 0) {
        cout << "Negativo e impar" << endl;
    } else {
        cout << "No cumple las condiciones" << endl;
    }
    return 0;
}



