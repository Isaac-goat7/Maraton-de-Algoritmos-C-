/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//38. Calcular el porcentaje de una cantidad.
#include <iostream>
using namespace std;
int main() {
    double cantidad, porcentaje;
    cout << "Cantidad total: "; cin >> cantidad;
    cout << "Porcentaje (%): "; cin >> porcentaje;
    double resultado = (cantidad * porcentaje) / 100;
    cout << porcentaje << "% de " << cantidad << " es: " << resultado << endl;
    return 0;
}







