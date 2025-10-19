//Gloder Rodríguez
// EjercicioC383 - Tema: Copiar cadena con strcpy manual (sin std::string)

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// Comentarios: ejercicio introductorio sobre punteros/memoria dinamica.

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "--- EjercicioC383 - Copiar cadena con strcpy manual (sin std::string) ---\n";
    char src[256]; cout<<"Ingrese cadena (con espacios, hasta 255 chars): "; cin.ignore(); cin.getline(src,256);
    char dst[256]; char *s = src, *d = dst; while((*d++ = *s++)); cout<<"Copia: "<<dst<<'\n';
    return 0;
}
