/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//111. Determinar si un número es múltiplo de 4 o 6.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n % 4 == 0 && n % 6 == 0) {
        cout << n << " es múltiplo de 4 y 6" << endl;
    } else if(n % 4 == 0) {
        cout << n << " es múltiplo de 4" << endl;
    } else if(n % 6 == 0) {
        cout << n << " es múltiplo de 6" << endl;
    } else {
        cout << n << " no es múltiplo de 4 ni de 6" << endl;
    }
    return 0;
}

