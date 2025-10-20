//Gloder Rodríguez
// EjercicioC310 - Tema: Función que devuelve std::vector (suma elemento a elemento)

#include <bits/stdc++.h>
using namespace std;

// Comentarios: programa de ejemplo que ilustra el tema y usa funciones y arrays.

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cout << "Ingrese el tamaño del array: ";
    if(!(cin >> n) || n<=0){ cout << "Tamaño inválido\n"; return 0; }
    vector<long long> a(n);
    cout << "Ingrese " << n << " elementos (enteros):\n";
    for(int i=0;i<n;i++) cin >> a[i];

    vector<long long> v; v.reserve(n);
    for(int i=0;i<n;i++) v.push_back(a[i]);
    cout<<"Vector creado con push_back, tamaño: "<<v.size()<<'\n';
    return 0;
}
