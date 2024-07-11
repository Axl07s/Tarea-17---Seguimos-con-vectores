// Autor: Axel Molineros
// Fecha: 2024-09-07
// 5) Diseñe la función que convierte un entero en su equivalente en binario.
// El resultado del número binario se debe guardar en un vector. 

#include <iostream>

// Función que convierte un entero en su equivalente en binario y guarda el resultado en un array.
void ConvertirABinario(int numero, int binario[], int &size) {
    size = 0;

    if (numero == 0) {
        binario[size++] = 0;
        return;
    }

    while (numero > 0) {
        binario[size++] = numero % 2;
        numero /= 2;
    }

    // Invertir el array para obtener el binario en el orden correcto
    for (int i = 0; i < size / 2; ++i) {
        std::swap(binario[i], binario[size - i - 1]);
    }
}

int main() {
    // Definición del número a convertir y el array que almacenará el resultado binario
    int numero = 353;
    int binario[32]; // Un entero de 32 bits puede tener hasta 32 dígitos binarios
    int size;

    // Llamada a la función de conversión
    ConvertirABinario(numero, binario, size);

    // Muestra del resultado
    std::cout << "El número " << numero << " en binario es: ";
    for (int i = 0; i < size; ++i) {
        std::cout << binario[i];
    }
    std::cout << std::endl;

    return 0;
}


