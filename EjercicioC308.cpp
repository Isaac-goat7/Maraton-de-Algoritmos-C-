//Gloder Rodríguez
// EjercicioC308 - Tema: Uso de punteros con arrays (iteración)

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

    // Iterar usando punteros
    long long *arr = new long long[n]; for(int i=0;i<n;i++) arr[i]=a[i];
    cout<<"Elementos mediante punteros:\n"; for(int i=0;i<n;i++) cout<<*(arr+i)<<' '; cout<<'\n'; delete[] arr;
    return 0;
}
