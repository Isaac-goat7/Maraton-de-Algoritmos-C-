/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//137. Determinar si un número es divisible entre 6, 9 o ambos.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n % 6 == 0 && n % 9 == 0) {
        cout << n << " es divisible entre 6 y 9" << endl;
    } else if(n % 6 == 0) {
        cout << n << " es divisible entre 6" << endl;
    } else if(n % 9 == 0) {
        cout << n << " es divisible entre 9" << endl;
    } else {
        cout << n << " no es divisible entre 6 ni 9" << endl;
    }
    return 0;
}





