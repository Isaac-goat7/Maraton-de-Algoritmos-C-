/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//131. Determinar si un número es múltiplo de 9 o no.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n % 9 == 0) {
        cout << n << " es múltiplo de 9" << endl;
    } else {
        cout << n << " no es múltiplo de 9" << endl;
    }
    return 0;
}



