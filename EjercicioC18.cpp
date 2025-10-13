/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//18. Calcular el total de una compra con IVA del 13%.
#include <iostream>
using namespace std;
int main() {
    double precio;
    cout << "Ingrese el precio del producto: ";
    cin >> precio;
    double iva = precio * 0.13; // Cálculo del 13% del precio
    cout << "Precio total con IVA: " << precio + iva << endl;
    return 0;
}








