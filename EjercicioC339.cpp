//Gloder Rodríguez
// EjercicioC339 - Tema: Eliminar elementos pares (crear nuevo array)

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

    int pos; cout<<"Ingrese posicion (0-based) a eliminar: "; cin>>pos;
    if(pos<0 || pos>=n){ cout<<"Posicion invalida\n"; return 0; }
    a.erase(a.begin()+pos);
    cout<<"Array tras eliminar:\n"; for(auto v:a) cout<<v<<' '; cout<<'\n';
    return 0;
}
