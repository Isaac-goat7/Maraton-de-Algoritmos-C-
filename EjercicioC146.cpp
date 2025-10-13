/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//146. Determinar si un número es mayor que 100 y menor que 200.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: "; cin >> n;
    if(n > 100 && n < 200) {
        cout << n << " está entre 101 y 199" << endl;
    } else {
        cout << n << " no está en ese rango" << endl;
    }
    return 0;
}













