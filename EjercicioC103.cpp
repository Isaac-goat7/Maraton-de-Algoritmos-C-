/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//103. Determinar si un año es bisiesto.
#include <iostream>
using namespace std;
int main() {
    int año;
    cout << "Ingrese un año: "; cin >> año;
    if((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
        cout << año << " es bisiesto" << endl;
    } else {
        cout << año << " no es bisiesto" << endl;
    }
    return 0;
}






