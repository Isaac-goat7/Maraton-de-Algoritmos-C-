//Gloder Rodríguez
// EjercicioC429 - Tema: Implementar strcpy_s estilo seguro (con tope)

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// Comentarios: ejercicio introductorio sobre punteros/memoria dinamica.

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "--- EjercicioC429 - Implementar strcpy_s estilo seguro (con tope) ---\n";
    char src[256]; cout<<"Ingrese cadena (con espacios, hasta 255 chars): "; cin.ignore(); cin.getline(src,256);
    char dst[256]; char *s = src, *d = dst; while((*d++ = *s++)); cout<<"Copia: "<<dst<<'\n';
    return 0;
}
