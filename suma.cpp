#include <iostream>

/**
 * Programa: suma.cpp
 * Descripción: Calcula la suma de dos números enteros de forma profesional.
 */

int main() {
    // 1. Usamos nombres de variables más descriptivos
    int numero1 = 0;
    int numero2 = 0;
    int resultado = 0;

    // 2. Mejoramos la estética de la salida (espacios y limpieza)
    std::cout << "--- CALCULADORA DE SUMA ---" << std::endl;
    
    std::cout << "Ingrese el primer numero: ";
    if (!(std::cin >> numero1)) return 1; // Seguridad: Verifica si es un número

    std::cout << "Ingrese el segundo numero: ";
    if (!(std::cin >> numero2)) return 1;

    // 3. Operación
    resultado = numero1 + numero2;

    // 4. Salida elegante
    std::cout << "\n---------------------------" << std::endl;
    std::cout << "El resultado de la suma es: " << resultado << std::endl;
    std::cout << "---------------------------" << std::endl;

    return 0;
}