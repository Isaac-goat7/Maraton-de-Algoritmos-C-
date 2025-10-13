/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//115. Determinar la categoría de edad: niño, adolescente, adulto, anciano.
#include <iostream>
using namespace std;
int main() {
    int edad;
    cout << "Ingrese la edad: "; cin >> edad;
    if(edad >= 0 && edad <= 12) {
        cout << "Niño" << endl;
    } else if(edad >= 13 && edad <= 17) {
        cout << "Adolescente" << endl;
    } else if(edad >= 18 && edad <= 59) {
        cout << "Adulto" << endl;
    } else if(edad >= 60) {
        cout << "Anciano" << endl;
    } else {
        cout << "Edad inválida" << endl;
    }
    return 0;
}



