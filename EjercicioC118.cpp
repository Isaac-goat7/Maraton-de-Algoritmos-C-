/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//118. Validar si un número está fuera del rango 10-20.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n < 10 || n > 20) {
        cout << n << " está fuera del rango 10-20" << endl;
    } else {
        cout << n << " está dentro del rango" << endl;
    }
    return 0;
}

