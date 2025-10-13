/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//101. Determinar si un número es par o impar.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n % 2 == 0) { // Si el residuo de n/2 es 0, es par
        cout << n << " es par" << endl;
    } else {
        cout << n << " es impar" << endl;
    }
    return 0;
}








