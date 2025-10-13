/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//54. Calcular el total a pagar con descuento aplicado.
#include <iostream>
using namespace std;
int main() {
    double precio, descuento;
    cout << "Precio del producto: "; cin >> precio;
    cout << "Descuento (%): "; cin >> descuento;
    double total = precio - (precio * descuento / 100);
    cout << "Total con descuento: " << total << endl;
    return 0;
}











