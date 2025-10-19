//Gloder Rodríguez
// EjercicioC445 - Tema: Asignar memoria para matriz 3D dinámica (básico)

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// Comentarios: ejercicio introductorio sobre punteros/memoria dinamica.

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "--- EjercicioC445 - Asignar memoria para matriz 3D dinámica (básico) ---\n";
    int r,c; cout<<"Ingrese filas y columnas: "; if(!(cin>>r>>c)) return 0;
    int **m = new int*[r]; for(int i=0;i<r;i++) m[i] = new int[c];
    cout<<"Ingrese elementos:\n"; for(int i=0;i<r;i++) for(int j=0;j<c;j++) cin>>m[i][j];
    cout<<"Matriz leida:\n"; for(int i=0;i<r;i++){ for(int j=0;j<c;j++) cout<<m[i][j]<<' '; cout<<'\n'; }
    for(int i=0;i<r;i++) delete[] m[i]; delete[] m;
    return 0;
}
