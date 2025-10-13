/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//135. Determinar si un número es menor que 10, entre 10 y 50 o mayor que 50.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n < 10) {
        cout << "Menor que 10" << endl;
    } else if(n >= 10 && n <= 50) {
        cout << "Entre 10 y 50" << endl;
    } else {
        cout << "Mayor que 50" << endl;
    }
    return 0;
}







