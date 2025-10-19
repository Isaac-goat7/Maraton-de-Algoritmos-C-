//Gloder Rodríguez
// EjercicioC352 - Tema: Asignar memoria dinámicamente para un array (new/delete)

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// Comentarios: ejercicio introductorio sobre punteros/memoria dinamica.

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "--- EjercicioC352 - Asignar memoria dinámicamente para un array (new/delete) ---\n";
    int n; cout<<"Ingrese tamaño del array: "; if(!(cin>>n) || n<=0) return 0;
    int *arr = new int[n];
    cout<<"Ingrese "<<n<<" elementos:\n"; for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"Elementos ingresados:\n"; for(int i=0;i<n;i++) cout<<arr[i]<<' '; cout<<'\n';
    delete[] arr;
    return 0;
}
