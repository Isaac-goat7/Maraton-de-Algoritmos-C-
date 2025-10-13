/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//109. Determinar si un número es divisible entre 2, 3 o ambos.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n % 2 == 0 && n % 3 == 0) {
        cout << n << " es divisible entre 2 y 3" << endl;
    } else if(n % 2 == 0) {
        cout << n << " es divisible entre 2" << endl;
    } else if(n % 3 == 0) {
        cout << n << " es divisible entre 3" << endl;
    } else {
        cout << n << " no es divisible entre 2 ni 3" << endl;
    }
    return 0;
}

