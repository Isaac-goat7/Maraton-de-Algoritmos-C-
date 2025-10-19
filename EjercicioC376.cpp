//Gloder Rodríguez
// EjercicioC376 - Tema: Swap de elementos en un array usando punteros

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// Comentarios: ejercicio introductorio sobre punteros/memoria dinamica.

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "--- EjercicioC376 - Swap de elementos en un array usando punteros ---\n";
    int a,b; cout<<"Ingrese dos enteros (a b): "; if(!(cin>>a>>b)) return 0;
    cout<<"Antes: a="<<a<<" b="<<b<<"\n";
    int *pa = &a; int *pb = &b; int tmp = *pa; *pa = *pb; *pb = tmp;
    cout<<"Despues: a="<<a<<" b="<<b<<"\n";
    return 0;
}
