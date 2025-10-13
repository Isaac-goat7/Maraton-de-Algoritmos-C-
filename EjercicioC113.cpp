/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//113. Validar si un carácter es mayúscula, minúscula o no letra.
#include <iostream>
using namespace std;
int main() {
    char c;
    cout << "Ingrese un carácter: "; cin >> c;
    if(c >= 'A' && c <= 'Z') {
        cout << "Mayúscula" << endl;
    } else if(c >= 'a' && c <= 'z') {
        cout << "Minúscula" << endl;
    } else {
        cout << "No es una letra" << endl;
    }
    return 0;
}





