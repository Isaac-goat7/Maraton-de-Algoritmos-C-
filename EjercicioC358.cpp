//Gloder Rodríguez
// EjercicioC358 - Tema: Puntero a puntero (double pointer) básico

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// Comentarios: ejercicio introductorio sobre punteros/memoria dinamica.

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "--- EjercicioC358 - Puntero a puntero (double pointer) básico ---\n";
    int x; cout<<"Ingrese un entero: "; if(!(cin>>x)) return 0;
    int *p = &x; int **pp = &p;
    cout<<"Valor via **pp: "<< **pp <<"\n";
    return 0;
}
