/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//53. Calcular el área de un trapecio.
#include <iostream>
using namespace std;
int main() {
    double base1, base2, altura;
    cout << "Base mayor: "; cin >> base1;
    cout << "Base menor: "; cin >> base2;
    cout << "Altura: "; cin >> altura;
    double area = ((base1 + base2) * altura) / 2;
    cout << "Área del trapecio: " << area << endl;
    return 0;
}










