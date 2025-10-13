/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//138. Validar si un carácter es una vocal.
#include <iostream>
using namespace std;
int main() {
    char c;
    cout << "Ingrese una letra: "; cin >> c;
    c = tolower(c); // Convertir a minúscula
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        cout << c << " es una vocal" << endl;
    } else {
        cout << c << " no es una vocal" << endl;
    }
    return 0;
}






