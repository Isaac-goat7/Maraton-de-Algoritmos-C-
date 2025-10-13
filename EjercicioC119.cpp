/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//119. Determinar si un número es múltiplo de 2 y no múltiplo de 3.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n % 2 == 0 && n % 3 != 0) {
        cout << n << " es múltiplo de 2 y no de 3" << endl;
    } else {
        cout << n << " no cumple la condición" << endl;
    }
    return 0;
}

