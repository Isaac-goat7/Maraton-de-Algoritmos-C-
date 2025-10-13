/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//121. Determinar si un número es divisible entre 4 o 6 pero no ambos.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if((n % 4 == 0) ^ (n % 6 == 0)) { // ^ es XOR, verdadero si solo uno es divisible
        cout << n << " es divisible entre 4 o 6 pero no ambos" << endl;
    } else {
        cout << n << " no cumple la condición" << endl;
    }
    return 0;
}
