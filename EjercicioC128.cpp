/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//128. Validar si un número es múltiplo de 2, 3 y 5.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n % 2 == 0 && n % 3 == 0 && n % 5 == 0) {
        cout << n << " es múltiplo de 2, 3 y 5" << endl;
    } else {
        cout << n << " no es múltiplo de los tres" << endl;
    }
    return 0;
}
