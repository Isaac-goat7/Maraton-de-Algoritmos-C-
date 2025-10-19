//Gloder Rodríguez
// EjercicioC456 - Tema: Uso de new (nothrow) y comprobación de nullptr

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// Comentarios: ejercicio introductorio sobre punteros/memoria dinamica.

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "--- EjercicioC456 - Uso de new (nothrow) y comprobación de nullptr ---\n";
    int *p = nullptr;
    cout<<"Puntero inicializado a nullptr. Comprueba antes de usar.\n";
    if(p==nullptr) cout<<"p es nulo\n";
    return 0;
}
