/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//46. Calcular la ganancia de una inversión con interés simple.
#include <iostream>
using namespace std;
int main() {
    double capital, tasa, tiempo;
    cout << "Capital invertido: "; cin >> capital;
    cout << "Tasa de interés (% anual): "; cin >> tasa;
    cout << "Tiempo (años): "; cin >> tiempo;
    double interes = (capital * tasa * tiempo) / 100;
    cout << "Ganancia: " << interes << endl;
    cout << "Monto total: " << capital + interes << endl;
    return 0;
}










