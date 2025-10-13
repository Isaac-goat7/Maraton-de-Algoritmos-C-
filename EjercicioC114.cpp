/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//114. Determinar si un número está entre 50 y 100 inclusive.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n >= 50 && n <= 100) {
        cout << n << " está entre 50 y 100" << endl;
    } else {
        cout << n << " no está entre 50 y 100" << endl;
    }
    return 0;
}





