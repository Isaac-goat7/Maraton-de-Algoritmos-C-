/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//139. Validar si un número está fuera del rango -50 a 50.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n < -50 || n > 50) {
        cout << n << " está fuera del rango -50 a 50" << endl;
    } else {
        cout << n << " está dentro del rango" << endl;
    }
    return 0;
}







