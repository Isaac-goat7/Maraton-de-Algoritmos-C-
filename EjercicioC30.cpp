/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//30. Calcular la hipotenusa de un triángulo rectángulo.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double cateto1, cateto2;
    cout << "Cateto 1: "; cin >> cateto1;
    cout << "Cateto 2: "; cin >> cateto2;
    double h = sqrt(pow(cateto1, 2) + pow(cateto2, 2)); // Teorema de Pitágoras
    cout << "Hipotenusa: " << h << endl;
    return 0;
}



