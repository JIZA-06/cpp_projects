#include <iostream>
#include <string>

using namespace std;

int main() {
    // string para palabras y float para números con decimales
    string nombreGuerrero;
    string nombreArma;
    int cantidadAtaques;
    float danioPorAtaque;

    cout << "--- SIMULADOR DE COMBATE ---" << endl;
    
    cout << "Nombre del Guerrero: ";
    cin >> nombreGuerrero;

    cout << "Nombre del Arma: ";
    cin >> nombreArma;

    cout << "Cuantos ataques realizaste? ";
    cin >> cantidadAtaques;

    cout << "Cuanto danio hace cada ataque? ";
    cin >> danioPorAtaque;

    // Calculamos el total
    float danioTotal = cantidadAtaques * danioPorAtaque;

    // Mostramos el resultado final
    cout << "\nEl guerrero " << nombreGuerrero << " ataco con su " << nombreArma;
    cout << " e infligio un total de " << danioTotal << " de danio." << endl;

    // Estilo moderno: no necesitamos el return 0
}