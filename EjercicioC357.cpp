//Gloder Rodríguez
// EjercicioC357 - Tema: Uso de puntero nulo (nullptr) y verificación

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// Comentarios: ejercicio introductorio sobre punteros/memoria dinamica.

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "--- EjercicioC357 - Uso de puntero nulo (nullptr) y verificación ---\n";
    int *p = nullptr;
    cout<<"Puntero inicializado a nullptr. Comprueba antes de usar.\n";
    if(p==nullptr) cout<<"p es nulo\n";
    return 0;
}
