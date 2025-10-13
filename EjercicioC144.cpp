/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//144. Validar si un número es múltiplo de 2, 3 o 5 y mostrar cuál.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n % 2 == 0) cout << n << " es múltiplo de 2" << endl;
    if(n % 3 == 0) cout << n << " es múltiplo de 3" << endl;
    if(n % 5 == 0) cout << n << " es múltiplo de 5" << endl;
    if(n % 2 != 0 && n % 3 != 0 && n % 5 != 0) cout << n << " no es múltiplo de 2, 3 ni 5" << endl;
    return 0;
}












