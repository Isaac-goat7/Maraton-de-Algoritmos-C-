//Gloder Rodríguez
// EjercicioC390 - Tema: Acceder a elementos de lista enlazada por índice

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// Comentarios: ejercicio introductorio sobre punteros/memoria dinamica.

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "--- EjercicioC390 - Acceder a elementos de lista enlazada por índice ---\n";
    struct Node{ int val; Node* next; Node(int v):val(v),next(nullptr){} };
    Node* head = nullptr; int x; cout<<"Ingrese enteros (0 para terminar):\n";
    while(cin>>x && x!=0){ Node* n = new Node(x); n->next = head; head = n; }
    cout<<"Lista (inicial->final): "; for(Node* p=head;p;p=p->next) cout<<p->val<<' '; cout<<'\n';
    while(head){ Node* t = head; head = head->next; delete t; }
    return 0;
}
