/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//145. Determinar si un número es divisible entre 8 o 12.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n % 8 == 0 && n % 12 == 0) {
        cout << n << " es divisible entre 8 y 12" << endl;
    } else if(n % 8 == 0) {
        cout << n << " es divisible entre 8" << endl;
    } else if(n % 12 == 0) {
        cout << n << " es divisible entre 12" << endl;
    } else {
        cout << n << " no es divisible entre 8 ni 12" << endl;
    }
    return 0;
}













