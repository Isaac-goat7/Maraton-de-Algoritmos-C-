/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//60. Convertir minutos a horas y minutos.
#include <iostream>
using namespace std;
int main() {
    int minutos;
    cout << "Ingrese minutos: "; cin >> minutos;
    int horas = minutos / 60;
    int restantes = minutos % 60;
    cout << horas << " horas y " << restantes << " minutos" << endl;
    return 0;
}











