/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//141. Determinar si un número es par y mayor que 10.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n % 2 == 0 && n > 10) {
        cout << n << " es par y mayor que 10" << endl;
    } else {
        cout << n << " no cumple la condición" << endl;
    }
    return 0;
}









