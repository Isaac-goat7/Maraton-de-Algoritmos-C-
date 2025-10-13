/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//83. Convertir segundos a minutos y horas.
#include <iostream>
using namespace std;
int main() {
    int seg;
    cout << "Ingrese segundos: "; cin >> seg;
    int horas = seg / 3600;
    int minutos = (seg % 3600) / 60;
    int segundos = seg % 60;
    cout << horas << "h " << minutos << "m " << segundos << "s" << endl;
    return 0;
}









