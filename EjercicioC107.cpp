/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//107. Determinar si un número es múltiplo de 7 o 11.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n % 7 == 0 || n % 11 == 0) {
        cout << n << " es múltiplo de 7 o 11" << endl;
    } else {
        cout << n << " no es múltiplo de 7 ni 11" << endl;
    }
    return 0;
}




