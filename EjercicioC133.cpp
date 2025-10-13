/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//133. Validar si un carácter ingresado es un dígito.
#include <iostream>
using namespace std;
int main() {
    char c;
    cout << "Ingrese un carácter: "; cin >> c;
    if(c >= '0' && c <= '9') {
        cout << c << " es un dígito" << endl;
    } else {
        cout << c << " no es un dígito" << endl;
    }
    return 0;
}





