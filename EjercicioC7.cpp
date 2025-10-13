/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//7. Calcular el volumen de un cubo.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double arista;
    cout << "Ingrese la arista del cubo: ";
    cin >> arista;
    double volumen = pow(arista, 3); // Elevar al cubo usando pow()
    cout << "El volumen del cubo es: " << volumen << endl;
    return 0;
}



