//Gloder Rodríguez
// EjercicioC453 - Tema: Copiar objeto con punteros (implementar copy constructor)

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// Comentarios: ejercicio introductorio sobre punteros/memoria dinamica.

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "--- EjercicioC453 - Copiar objeto con punteros (implementar copy constructor) ---\n";
    int n; cout<<"Ingrese tamaño del array: "; if(!(cin>>n) || n<=0) return 0;
    int *arr = new int[n]; cout<<"Ingrese elementos:\n"; for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"Elementos y direcciones:\n"; for(int i=0;i<n;i++) cout<<"arr["<<i<<"]="<<arr[i]<<" addr="<<(arr+i)<<'\n';
    delete[] arr;
    return 0;
}
