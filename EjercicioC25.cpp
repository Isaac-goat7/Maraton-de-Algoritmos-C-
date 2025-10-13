/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//25. Calcular el área de un trapecio.
#include <iostream>
using namespace std;
int main() {
    double baseMenor, baseMayor, altura;
    cout << "Base menor: "; cin >> baseMenor;
    cout << "Base mayor: "; cin >> baseMayor;
    cout << "Altura: "; cin >> altura;
    double area = ((baseMenor + baseMayor) * altura) / 2; // Fórmula de trapecio
    cout << "Área del trapecio: " << area << endl;
    return 0;
}











