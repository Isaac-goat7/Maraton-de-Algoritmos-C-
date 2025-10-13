/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//126. Determinar si un número es divisible entre 5 y 10.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n % 5 == 0 && n % 10 == 0) {
        cout << n << " es divisible entre 5 y 10" << endl;
    } else if(n % 5 == 0) {
        cout << n << " es divisible entre 5" << endl;
    } else {
        cout << n << " no es divisible entre 5 ni 10" << endl;
    }
    return 0;
}
