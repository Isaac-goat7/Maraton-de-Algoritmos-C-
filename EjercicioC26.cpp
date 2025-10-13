/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//26. Calcular el área de un rombo.
#include <iostream>
using namespace std;
int main() {
    double D, d; // D: diagonal mayor, d: diagonal menor
    cout << "Diagonal mayor: ";
    cin >> D;
    cout << "Diagonal menor: ";
    cin >> d;
    double area = (D * d) / 2; // Fórmula: (D * d) / 2
    cout << "Área del rombo: " << area << endl;
    return 0;
}
