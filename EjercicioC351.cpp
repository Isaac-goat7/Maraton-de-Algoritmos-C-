//Gloder Rodríguez
// EjercicioC351 - Tema: Intercambiar dos variables usando punteros

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// Comentarios: ejercicio introductorio sobre punteros/memoria dinamica.

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "--- EjercicioC351 - Intercambiar dos variables usando punteros ---\n";
    int a,b; cout<<"Ingrese dos enteros (a b): "; if(!(cin>>a>>b)) return 0;
    cout<<"Antes: a="<<a<<" b="<<b<<"\n";
    int *pa = &a; int *pb = &b; int tmp = *pa; *pa = *pb; *pb = tmp;
    cout<<"Despues: a="<<a<<" b="<<b<<"\n";
    return 0;
}
