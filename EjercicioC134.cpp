/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//134. Determinar si un número es múltiplo de 7 y positivo.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n % 7 == 0 && n > 0) {
        cout << n << " es múltiplo de 7 y positivo" << endl;
    } else {
        cout << n << " no cumple la condición" << endl;
    }
    return 0;
}






