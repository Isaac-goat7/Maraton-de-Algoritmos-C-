//Gloder Rodríguez
// EjercicioC356 - Tema: Reservar memoria para matriz dinámica (2D) y liberar

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// Comentarios: ejercicio introductorio sobre punteros/memoria dinamica.

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "--- EjercicioC356 - Reservar memoria para matriz dinámica (2D) y liberar ---\n";
    int r,c; cout<<"Ingrese filas y columnas: "; if(!(cin>>r>>c)) return 0;
    int **m = new int*[r]; for(int i=0;i<r;i++) m[i] = new int[c];
    cout<<"Ingrese elementos:\n"; for(int i=0;i<r;i++) for(int j=0;j<c;j++) cin>>m[i][j];
    cout<<"Matriz leida:\n"; for(int i=0;i<r;i++){ for(int j=0;j<c;j++) cout<<m[i][j]<<' '; cout<<'\n'; }
    for(int i=0;i<r;i++) delete[] m[i]; delete[] m;
    return 0;
}
