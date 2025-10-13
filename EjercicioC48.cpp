/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//48. Convertir una cantidad de segundos a horas, minutos y segundos.
#include <iostream>
using namespace std;
int main() {
    int totalSeg;
    cout << "Ingrese cantidad de segundos: ";
    cin >> totalSeg;
    int horas = totalSeg / 3600;
    int minutos = (totalSeg % 3600) / 60;
    int segundos = totalSeg % 60;
    cout << horas << "h " << minutos << "m " << segundos << "s" << endl;
    return 0;
}










