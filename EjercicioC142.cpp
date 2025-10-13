/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//142. Validar si un número es múltiplo de 5 o 7.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n % 5 == 0 || n % 7 == 0) {
        cout << n << " es múltiplo de 5 o 7" << endl;
    } else {
        cout << n << " no es múltiplo de 5 ni 7" << endl;
    }
    return 0;
}










