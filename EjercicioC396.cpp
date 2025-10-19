//Gloder Rodríguez
// EjercicioC396 - Tema: Asignar memoria con malloc/free (comparativo)

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// Comentarios: ejercicio introductorio sobre punteros/memoria dinamica.

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "--- EjercicioC396 - Asignar memoria con malloc/free (comparativo) ---\n";
    cout<<"Ejemplo didactico usando malloc/free (C style).\n";
    int n; cout<<"Ingrese n: "; cin>>n; int *a = (int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++) a[i]=i; for(int i=0;i<n;i++) cout<<a[i]<<' '; cout<<'\n'; free(a);
    return 0;
}
