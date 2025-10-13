/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//74. Convertir metros por segundo a kilómetros por hora.
#include <iostream>
using namespace std;
int main() {
    double mps;
    cout << "Velocidad (m/s): "; cin >> mps;
    double kmh = mps * 3.6; // 1 m/s = 3.6 km/h
    cout << "Velocidad en km/h: " << kmh << endl;
    return 0;
}



