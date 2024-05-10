#include <iostream>
#include <map>

using namespace std;

// Función para convertir números a números romanos
string intToRoman(int num) {
    // Definir los símbolos romanos y sus valores correspondientes
    map<int, string> romanMap = {
        {1, "I"}, {4, "IV"}, {5, "V"}, {9, "IX"}, {10, "X"},
        {40, "XL"}, {50, "L"}, {90, "XC"}, {100, "C"}, {400, "CD"},
        {500, "D"}, {900, "CM"}, {1000, "M"}
    };
    
    // Inicializar la cadena para el número romano resultante
    string romanNum = "";
    
    // Iterar a través del mapa de símbolos romanos en orden descendente
    for (auto it = romanMap.rbegin(); it != romanMap.rend(); ++it) {
        // Mientras el número sea mayor o igual al valor actual del símbolo romano
        while (num >= it->first) {
            // Agregar el símbolo romano al número romano resultante
            romanNum += it->second;
            // Restar el valor del símbolo romano al número
            num -= it->first;
        }
    }
    
    return romanNum;
}

int main() {
    // Pedir al usuario que ingrese un número
    int num;
    cout << "Ingrese un número entre 1 y 5000: ";
    cin >> num;
    
    // Verificar si el número está dentro del rango permitido
    if (num < 1 || num > 5000) {
        cout << "Número fuera de rango. Por favor, ingrese un número entre 1 y 5000." << endl;
        return 1;
    }
    
    // Convertir el número ingresado a número romano
    string romanNumber = intToRoman(num);
    
    // Mostrar el número romano resultante
    cout << "El número romano correspondiente es: " << romanNumber << endl;
    
    return 0;
} 