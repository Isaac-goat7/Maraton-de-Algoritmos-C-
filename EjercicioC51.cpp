/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//51. Calcular el precio final de un producto con IVA incluido.
#include <iostream>
using namespace std;
int main() {
    double precio, iva;
    cout << "Precio del producto: "; cin >> precio;
    cout << "IVA (%): "; cin >> iva;
    double total = precio + (precio * iva / 100); // Suma del IVA al precio original
    cout << "Precio final con IVA: " << total << endl;
    return 0;
}










