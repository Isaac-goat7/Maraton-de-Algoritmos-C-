/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//143. Determinar si un número es positivo, negativo o cero y mostrar mensaje detallado.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n > 0) {
        cout << n << " es positivo" << endl;
    } else if(n < 0) {
        cout << n << " es negativo" << endl;
    } else {
        cout << "El número es cero" << endl;
    }
    return 0;
}











