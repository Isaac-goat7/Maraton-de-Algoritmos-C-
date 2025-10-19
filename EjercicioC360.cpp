//Gloder Rodríguez
// EjercicioC360 - Tema: Retornar un puntero a memoria dinámica desde una función

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// Comentarios: ejercicio introductorio sobre punteros/memoria dinamica.

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "--- EjercicioC360 - Retornar un puntero a memoria dinámica desde una función ---\n";
    auto make_array = [](int n)->int*{ int* a = new int[n]; for(int i=0;i<n;i++) a[i]=i; return a; };
    int n; cout<<"Ingrese n: "; cin>>n; int *arr = make_array(n);
    for(int i=0;i<n;i++) cout<<arr[i]<<' '; cout<<'\n'; delete[] arr;
    return 0;
}
