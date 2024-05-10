#include <iostream>
#include <string>

class Personaje {
private:
    std::string nombre;
    int nivel;
    int puntosVida;
    int puntosAtaque;

public:
    // Constructor
    Personaje(std::string nombre, int nivel, int puntosVida, int puntosAtaque) {
        this->nombre = nombre;
        this->nivel = nivel;
        this->puntosVida = puntosVida;
        this->puntosAtaque = puntosAtaque;
    }

    // Métodos para obtener información del personaje
    std::string obtenerNombre() {
        return nombre;
    }

    int obtenerNivel() {
        return nivel;
    }

    int obtenerPuntosVida() {
        return puntosVida;
    }

    int obtenerPuntosAtaque() {
        return puntosAtaque;
    }

    // Método para imprimir información del personaje
    void imprimirInformacion() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Nivel: " << nivel << std::endl;
        std::cout << "Puntos de vida: " << puntosVida << std::endl;
        std::cout << "Puntos de ataque: " << puntosAtaque << std::endl;
    }

    // Método para que el personaje ataque a otro personaje
    void atacar(Personaje &otroPersonaje) {
        std::cout << nombre << " ataca a " << otroPersonaje.obtenerNombre() << "!" << std::endl;
        // Supongamos que aquí hay lógica para calcular el daño y restar puntos de vida al otro personaje
    }
};

int main() {
    // Crear dos personajes
    Personaje jugador("Goku", 1, 100, 10);
    Personaje enemigo("Freezer", 1, 80, 8);

    // Imprimir información de los personajes
    jugador.imprimirInformacion();
    enemigo.imprimirInformacion();

    // El jugador ataca al enemigo
    jugador.atacar(enemigo);

    return 0;
}
