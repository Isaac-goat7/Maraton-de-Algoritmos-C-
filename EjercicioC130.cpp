/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//130. Determinar si un número pertenece a uno de tres rangos: 0-50, 51-100, 101-150.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n >= 0 && n <= 50) {
        cout << "Está entre 0 y 50" << endl;
    } else if(n >= 51 && n <= 100) {
        cout << "Está entre 51 y 100" << endl;
    } else if(n >= 101 && n <= 150) {
        cout << "Está entre 101 y 150" << endl;
    } else {
        cout << "Fuera de los rangos especificados" << endl;
    }
    return 0;
}


