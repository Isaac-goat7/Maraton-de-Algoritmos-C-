/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

///Gloder Rodriguez
//125. Clasificar un carácter como mayúscula, minúscula, número o símbolo.
#include <iostream>
using namespace std;
int main() {
    char c;
    cout << "Ingrese un carácter: "; cin >> c;
    if(c >= 'A' && c <= 'Z') {
        cout << "Mayúscula" << endl;
    } else if(c >= 'a' && c <= 'z') {
        cout << "Minúscula" << endl;
    } else if(c >= '0' && c <= '9') {
        cout << "Número" << endl;
    } else {
        cout << "Símbolo" << endl;
    }
    return 0;
}
