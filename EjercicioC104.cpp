/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//104. Comparar dos números y mostrar el mayor.
#include <iostream>
using namespace std;
int main() {
    double a, b;
    cout << "Ingrese dos números: "; cin >> a >> b;
    if(a > b) {
        cout << "El mayor es: " << a << endl;
    } else if(b > a) {
        cout << "El mayor es: " << b << endl;
    } else {
        cout << "Los números son iguales" << endl;
    }
    return 0;
}






