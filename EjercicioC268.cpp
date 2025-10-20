//Gloder Rodriguez
//Ejercicio 268 - Funciones y Arrays
//Este programa demuestra el uso de arrays y funciones en C++.

#include <iostream>
using namespace std;

// Función para calcular el promedio de un array
float calcularPromedio(int arr[], int tamaño) {
    int suma = 0;
    for(int i = 0; i < tamaño; i++) suma += arr[i];
    return (float)suma / tamaño;
}

// Función para invertir un array
void invertirArray(int arr[], int tamaño) {
    for(int i = 0; i < tamaño/2; i++) {
        int temp = arr[i];
        arr[i] = arr[tamaño-1-i];
        arr[tamaño-1-i] = temp;
    }
}

// Función para encontrar el mayor de un array
int encontrarMayor(int arr[], int tamaño) {
    int mayor = arr[0];
    for(int i = 1; i < tamaño; i++) {
        if(arr[i] > mayor) mayor = arr[i];
    }
    return mayor;
}

int main() {
    int arr[5];
    cout << "Ingrese 5 números para el ejercicio 268:\n";
    for(int i=0; i<5; i++) cin >> arr[i];

    cout << "Promedio: " << calcularPromedio(arr,5) << endl;
    invertirArray(arr,5);
    cout << "Array invertido: ";
    for(int i=0; i<5; i++) cout << arr[i] << " ";
    cout << endl;
    cout << "Número mayor: " << encontrarMayor(arr,5) << endl;

    return 0;
}
