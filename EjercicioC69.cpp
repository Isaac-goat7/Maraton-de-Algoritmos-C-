/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//69. Mostrar el cuadrado de la suma de dos números.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b;
    cout << "Ingrese dos números: "; cin >> a >> b;
    cout << "Resultado: " << pow((a + b), 2) << endl;
    return 0;
}
