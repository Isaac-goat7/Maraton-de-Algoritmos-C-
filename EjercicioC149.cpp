/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//149. Determinar si un número es par o impar y múltiplo de 3.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n % 2 == 0) {
        cout << n << " es par"; 
    } else {
        cout << n << " es impar";
    }
    if(n % 3 == 0) {
        cout << " y múltiplo de 3" << endl;
    } else {
        cout << " y no es múltiplo de 3" << endl;
    }
    return 0;
}
















