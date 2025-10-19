//Gloder Rodríguez
// EjercicioC492 - Tema: Paso por referencia con punteros (variante)

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// Comentarios: ejercicio introductorio sobre punteros/memoria dinamica.

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "--- EjercicioC492 - Paso por referencia con punteros (variante) ---\n";
    auto inc = [](int *x){ if(x) (*x)++; };
    int v; cout<<"Ingrese entero: "; cin>>v; inc(&v); cout<<"Despues incremento: "<<v<<'\n';
    return 0;
}
