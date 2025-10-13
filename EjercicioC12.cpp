/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//12. Dividir dos números (evitar división por cero).
#include <iostream>
using namespace std;
int main() {
    double a, b;
    cout << "Ingrese el dividendo y el divisor: ";
    cin >> a >> b;
    if (b != 0) // Se verifica que el divisor no sea cero
        cout << "Resultado: " << a / b << endl;
    else
        cout << "Error: No se puede dividir entre cero." << endl;
    return 0;
}






