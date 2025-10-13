/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//102. Validar si un número es positivo, negativo o cero.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n > 0) {
        cout << "Número positivo" << endl;
    } else if(n < 0) {
        cout << "Número negativo" << endl;
    } else {
        cout << "El número es cero" << endl;
    }
    return 0;
}






