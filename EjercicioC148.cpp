/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//148. Validar si un número es negativo o mayor que 50.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n < 0 || n > 50) {
        cout << n << " es negativo o mayor que 50" << endl;
    } else {
        cout << n << " está entre 0 y 50" << endl;
    }
    return 0;
}















