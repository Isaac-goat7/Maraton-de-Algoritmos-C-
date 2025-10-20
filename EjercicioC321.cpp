//Gloder Rodríguez
// EjercicioC321 - Tema: Ordenar en orden ascendente

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

    sort(a.begin(), a.end());
            cout << "Array ordenado:\n";
        for(auto v:a) cout<<v<<' ';
        cout<<'\n';
    return 0;
}
