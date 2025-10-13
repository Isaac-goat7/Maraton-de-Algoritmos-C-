/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//19. Calcular un descuento del 20%.
#include <iostream>
using namespace std;
int main() {
    double precio;
    cout << "Ingrese el precio original: ";
    cin >> precio;
    double descuento = precio * 0.20; // 20% del precio
    cout << "Precio con descuento: " << precio - descuento << endl;
    return 0;
}








