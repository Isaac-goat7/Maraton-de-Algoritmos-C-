//Gloder Rodríguez
// EjercicioC491 - Tema: Puntero a puntero (double pointer) básico (variante)

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// Comentarios: ejercicio introductorio sobre punteros/memoria dinamica.

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "--- EjercicioC491 - Puntero a puntero (double pointer) básico (variante) ---\n";
    int x; cout<<"Ingrese un entero: "; if(!(cin>>x)) return 0;
    int *p = &x; int **pp = &p;
    cout<<"Valor via **pp: "<< **pp <<"\n";
    return 0;
}
