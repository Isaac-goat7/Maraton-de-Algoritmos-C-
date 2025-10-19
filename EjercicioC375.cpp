//Gloder Rodríguez
// EjercicioC375 - Tema: Simular out-parameter con punteros

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// Comentarios: ejercicio introductorio sobre punteros/memoria dinamica.

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "--- EjercicioC375 - Simular out-parameter con punteros ---\n";
    auto inc = [](int *x){ if(x) (*x)++; };
    int v; cout<<"Ingrese entero: "; cin>>v; inc(&v); cout<<"Despues incremento: "<<v<<'\n';
    return 0;
}
