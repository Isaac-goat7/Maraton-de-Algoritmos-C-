/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//150. Determinar si un número es múltiplo de 10 o 20.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n % 10 == 0 && n % 20 == 0) {
        cout << n << " es múltiplo de 10 y 20" << endl;
    } else if(n % 10 == 0) {
        cout << n << " es múltiplo de 10" << endl;
    } else if(n % 20 == 0) {
        cout << n << " es múltiplo de 20" << endl;
    } else {
        cout << n << " no es múltiplo de 10 ni 20" << endl;
    }
    return 0;
}
















