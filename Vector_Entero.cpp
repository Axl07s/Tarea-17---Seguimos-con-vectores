// Autor: Axel Molineros
// Fecha: 2024-09-07
// 4) Diseñe la función que busca un número entero y devuelve la cantidad de veces que existe ese número en el vector.

#include <iostream>

// Función que busca un número entero y devuelve la cantidad de veces que existe en el vector.
int VecBuscarN(const int vector[], int size, int numero) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (vector[i] == numero) {
            ++count;
        }
    }
    return count;
}

int main() {
    // Definición del array y variables
    int vector[] = {6, 2, 3, 4, 5, 4, 4, 3, 3, 3};
    const int size = sizeof(vector) / sizeof(vector[0]);
    int numero = 3;

    // Llamada a la función y muestra del resultado
    int cantidad = VecBuscarN(vector, size, numero);
    std::cout << "El número " << numero << " aparece " << cantidad << " veces en el vector." << std::endl;

    return 0;
}

