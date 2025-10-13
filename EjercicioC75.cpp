/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//75. Convertir kilómetros por hora a metros por segundo.
#include <iostream>
using namespace std;
int main() {
    double kmh;
    cout << "Velocidad (km/h): "; cin >> kmh;
    double mps = kmh / 3.6; // 1 km/h = 1/3.6 m/s
    cout << "Velocidad en m/s: " << mps << endl;
    return 0;
}



