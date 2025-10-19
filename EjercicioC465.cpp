//Gloder Rodríguez
// EjercicioC465 - Tema: Split de string simple usando punteros

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// Comentarios: ejercicio introductorio sobre punteros/memoria dinamica.

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "--- EjercicioC465 - Split de string simple usando punteros ---\n";
    int n; cout<<"Ingrese tamaño del array: "; if(!(cin>>n) || n<=0) return 0;
    int *arr = new int[n]; cout<<"Ingrese elementos:\n"; for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"Elementos y direcciones:\n"; for(int i=0;i<n;i++) cout<<"arr["<<i<<"]="<<arr[i]<<" addr="<<(arr+i)<<'\n';
    delete[] arr;
    return 0;
}
