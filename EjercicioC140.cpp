/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//140. Determinar si un número es divisible entre 11 o no.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n % 11 == 0) {
        cout << n << " es divisible entre 11" << endl;
    } else {
        cout << n << " no es divisible entre 11" << endl;
    }
    return 0;
}








