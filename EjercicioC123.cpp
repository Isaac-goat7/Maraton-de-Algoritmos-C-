/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//123. Validar si un número está dentro de un rango de 50 a 200.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n >= 50 && n <= 200) {
        cout << n << " está dentro del rango" << endl;
    } else {
        cout << n << " está fuera del rango" << endl;
    }
    return 0;
}
