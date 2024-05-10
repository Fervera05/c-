#include <iostream>

using namespace std;

int main() {

    const int intentosmaximos = 5; 
    int clave = 1234; 
    int intentosrestantes = intentosmaximos;
    int intentousuario;

    cout << "Bienvenido al juego de adivinar la clave!"<<endl;
    cout << "Tienes " << intentosmaximos << " intentos para adivinar la clave secreta de 4 dígitos."<<endl;

    while (intentosrestantes > 0) {
        cout << "Introduce tu intento: ";
        cin >> intentousuario;

        if (intentousuario == clave) {
            cout << "¡Felicidades! ¡Has adivinado la clave";
            break;
        } else {
            cout << "Clave incorrecta. ";

            intentosrestantes--;
            cout << "Te quedan " << intentosrestantes << " intentos."<<endl;

            if (intentosrestantes == 0) {
                cout << "¡Oh no! Has agotado todos tus intentos. La clave era " << clave <<endl;
            }
        }
    }

    return 0;
}