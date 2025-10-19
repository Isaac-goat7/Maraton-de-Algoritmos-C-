//Gloder Rodríguez
// EjercicioC366 - Tema: Acceder a elementos con *(ptr + i) vs ptr[i]

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// Comentarios: ejercicio introductorio sobre punteros/memoria dinamica.

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "--- EjercicioC366 - Acceder a elementos con *(ptr + i) vs ptr[i] ---\n";
    int n; cout<<"Ingrese n y luego n enteros: "; if(!(cin>>n) || n<=0) return 0;
    int *a = new int[n]; for(int i=0;i<n;i++) cin>>a[i];
    cout<<"Recorriendo con aritmetica de punteros:\n";
    for(int *p=a; p<a+n; ++p) cout<<*p<<' ';
    cout<<'\n'; delete[] a;
    return 0;
}
