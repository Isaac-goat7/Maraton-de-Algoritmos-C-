//Gloder Rodríguez
// EjercicioC344 - Tema: Rotar usando reverses (técnica en 3 pasos)

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

    int k; cout<<"Ingrese k (posiciones a rotar): "; cin>>k; k = ((k % n)+n)%n;
    // rotar izquierda: rotar n-k a la derecha
    k = n - k;
    reverse(a.begin(), a.end()); reverse(a.begin(), a.begin()+k); reverse(a.begin()+k, a.end());
    cout<<"Array rotado:\n"; for(auto v:a) cout<<v<<' '; cout<<'\n';
    return 0;
}
