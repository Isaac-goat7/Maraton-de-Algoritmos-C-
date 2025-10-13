/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//4. Convertir grados Fahrenheit a Celsius.
#include <iostream>
using namespace std;
int main() {
    double f, c;
    cout << "Ingrese temperatura en °F: ";
    cin >> f;
    c = (f - 32) * 5 / 9; // Fórmula inversa
    cout << "Temperatura en °C: " << c << endl;
    return 0;
}

