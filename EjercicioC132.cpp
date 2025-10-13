/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//132. Determinar si un número es divisible entre 4 pero no entre 8.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n % 4 == 0 && n % 8 != 0) {
        cout << n << " es divisible entre 4 pero no entre 8" << endl;
    } else {
        cout << n << " no cumple la condición" << endl;
    }
    return 0;
}




