/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//21. Calcular salario semanal según horas trabajadas.
#include <iostream>
using namespace std;
int main() {
    double horas, tarifa;
    cout << "Horas trabajadas: ";
    cin >> horas;
    cout << "Pago por hora: ";
    cin >> tarifa;
    double salario = horas * tarifa;
    cout << "Salario semanal: $" << salario << endl;
    return 0;
}










