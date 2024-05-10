#include <iostream>
#include <string>

using namespace std;

void imprimirPiramide(int altura, char tipoBloque) {
    // Iterar sobre cada fila de la pirámide
    for (int i = 1; i <= altura; ++i) {
        // Imprimir espacios en blanco para alinear los bloques a la derecha
        for (int j = 0; j < altura - i; ++j) {
            cout << " ";
        }
        // Imprimir bloques en la fila actual
        for (int k = 0; k < 2 * i - 1; ++k) {
            cout << tipoBloque;
        }
        cout << endl;
    }
}

int main() {
    int altura;
    char tipoBloque;

    // Solicitar al usuario la altura y el tipo de bloque
    cout << "Introduce la altura de la piramide: ";
    cin >> altura;
    cout << "Introduce el tipo de bloque (caracter): ";
    cin >> tipoBloque;

    // Llamar a la función para imprimir la pirámide
    imprimirPiramide(altura, tipoBloque);

    return 0;
}
