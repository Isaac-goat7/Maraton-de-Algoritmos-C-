// ============================================================
// Ejercicio 301
// ============================================================
// Enunciado: Programa de práctica con funciones y arreglos en C++.

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

void ejercicio301() {
    int n;
    cout << "Ejercicio 301: Ingresa el tamaño del arreglo: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Ingresa " << n << " elementos:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    // Operaciones distintas según el número del ejercicio
    if (301 % 5 == 2) {
        cout << "Suma: " << accumulate(arr.begin(), arr.end(), 0) << endl;
    } else if (301 % 5 == 3) {
        cout << "Máximo: " << *max_element(arr.begin(), arr.end()) << endl;
    } else if (301 % 5 == 4) {
        cout << "Mínimo: " << *min_element(arr.begin(), arr.end()) << endl;
    } else if (301 % 5 == 0) {
        reverse(arr.begin(), arr.end());
        cout << "Arreglo invertido: ";
        for (int x : arr) cout << x << " ";
        cout << endl;
    } else {
        sort(arr.begin(), arr.end());
        cout << "Arreglo ordenado: ";
        for (int x : arr) cout << x << " ";
        cout << endl;
    }
}

int main() {
    ejercicio301();
    return 0;
}
