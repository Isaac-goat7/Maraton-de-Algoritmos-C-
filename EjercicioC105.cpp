/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//105. Mostrar si un carácter es vocal o consonante.
#include <iostream>
using namespace std;
int main() {
    char letra;
    cout << "Ingrese una letra: "; cin >> letra;
    letra = tolower(letra); // Convertir a minúscula
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        cout << letra << " es vocal" << endl;
    } else {
        cout << letra << " es consonante" << endl;
    }
    return 0;
}






