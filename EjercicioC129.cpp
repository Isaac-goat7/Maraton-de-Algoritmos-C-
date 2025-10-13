/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//129. Determinar si un número es positivo, negativo, par o impar.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n > 0) {
        cout << "Positivo "; 
    } else if(n < 0) {
        cout << "Negativo "; 
    } else {
        cout << "Cero" << endl;
        return 0;
    }
    if(n % 2 == 0) {
        cout << "y par" << endl;
    } else {
        cout << "y impar" << endl;
    }
    return 0;
}

