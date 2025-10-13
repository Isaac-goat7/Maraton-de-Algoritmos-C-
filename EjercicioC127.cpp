/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//127. Determinar si un número es par y positivo.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n > 0 && n % 2 == 0) {
        cout << n << " es positivo y par" << endl;
    } else {
        cout << n << " no cumple la condición" << endl;
    }
    return 0;
}

