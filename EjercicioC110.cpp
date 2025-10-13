/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//110. Clasificar un número según su rango (0-10, 11-20, 21-30).
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n >= 0 && n <= 10) {
        cout << "Está entre 0 y 10" << endl;
    } else if(n >= 11 && n <= 20) {
        cout << "Está entre 11 y 20" << endl;
    } else if(n >= 21 && n <= 30) {
        cout << "Está entre 21 y 30" << endl;
    } else {
        cout << "Fuera de rango" << endl;
    }
    return 0;
}

