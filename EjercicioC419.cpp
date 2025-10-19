//Gloder Rodríguez
// EjercicioC419 - Tema: Implementar strdup manual (duplicar string)

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// Comentarios: ejercicio introductorio sobre punteros/memoria dinamica.

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "--- EjercicioC419 - Implementar strdup manual (duplicar string) ---\n";
    cout<<"Ingrese una cadena (sin espacios): "; string s; if(!(cin>>s)) return 0;
    char *dst = new char[s.size()+1];
    const char *src = s.c_str(); char *d = dst;
    while((*d++ = *src++));
    cout<<"Copia: "<<dst<<"\n";
    delete[] dst;
    return 0;
}
