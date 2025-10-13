/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//108. Mostrar si un número está entre 1 y 100.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n >= 1 && n <= 100) {
        cout << n << " está entre 1 y 100" << endl;
    } else {
        cout << n << " no está entre 1 y 100" << endl;
    }
    return 0;
}



