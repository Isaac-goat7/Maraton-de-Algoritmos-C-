/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//8. Pedir nombre y edad, luego mostrar un saludo.
#include <iostream>
#include <string> // Librería para usar cadenas de texto
using namespace std;
int main() {
    string nombre;
    int edad;
    cout << "Ingrese su nombre: ";
    cin >> nombre; // Captura un solo nombre (sin espacios)
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Hola " << nombre << ", tienes " << edad << " años." << endl;
    return 0;
}




