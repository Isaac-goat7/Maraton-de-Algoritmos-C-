/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//120. Validar si un carácter es una letra o un número.
#include <iostream>
using namespace std;
int main() {
    char c;
    cout << "Ingrese un carácter: "; cin >> c;
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        cout << c << " es una letra" << endl;
    } else if(c >= '0' && c <= '9') {
        cout << c << " es un número" << endl;
    } else {
        cout << c << " es un carácter especial" << endl;
    }
    return 0;
}
