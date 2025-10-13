/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//3. Convertir grados Celsius a Fahrenheit.
#include <iostream>
using namespace std;
int main() {
    double celsius, fahrenheit;
    cout << "Ingrese temperatura en °C: ";
    cin >> celsius;
    fahrenheit = (celsius * 9 / 5) + 32; // Conversión directa
    cout << "Temperatura en °F: " << fahrenheit << endl;
    return 0;
}

