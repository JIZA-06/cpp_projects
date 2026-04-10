#include <iostream>

/**
 * Programa: area_cuadrado.cpp
 * Objetivo: Calcular el área basándose en la longitud de sus lados.
 */

int main() {
    // Usamos double por si el usuario ingresa decimales
    double lado1 = 0.0;
    double lado2 = 0.0;
    double area = 0.0;

    std::cout << "--- CALCULADORA DE AREA (CUADRADO/RECTANGULO) ---" << std::endl;
    
    std::cout << "Ingrese la longitud del primer lado: ";
    if (!(std::cin >> lado1)) return 1;

    std::cout << "Ingrese la longitud del segundo lado: ";
    if (!(std::cin >> lado2)) return 1;

    // Lógica del diagrama de flujo
    area = lado1 * lado2;

    std::cout << "\n----------------------------------------" << std::endl;
    std::cout << "El area calculada es: " << area << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    return 0;
}
