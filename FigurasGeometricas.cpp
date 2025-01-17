#include <iostream>

using namespace std;

// Funci�n para imprimir una l�nea de asteriscos
void printLine(int length) {
    for (int i = 0; i < length; ++i) {
        cout << "* ";
    }
    cout << endl;
}

// Funci�n para imprimir un cuadrado de asteriscos
void drawSquare(int size) {
    for (int i = 0; i < size; ++i) {
        printLine(size);
    }
}

// Funci�n para imprimir un tri�ngulo rect�ngulo de asteriscos
void drawRightTriangle(int size) {
    for (int i = 1; i <= size; ++i) {
        printLine(i);
    }
}

int main() {
    int choice;
    int size;

    cout << "Seleccione la figura que desea crear:\n";
    cout << "1. Cuadrado\n";
    cout << "2. Triangulo rectangulo\n";
    cout << "Ingrese su eleccion (1 o 2): ";
    cin >> choice;

    cout << "Ingrese el tamano de la figura: ";
    cin >> size;

    switch (choice) {
        case 1:
            cout << "Cuadrado de asteriscos:\n";
            drawSquare(size);
            break;
        case 2:
            cout << "Triangulo rectangulo de asteriscos:\n";
            drawRightTriangle(size);
            break;
        default:
            cout << "Opci�n no valida. Por favor, seleccione 1 o 2.\n";
            return 1;
    }

    return 0;
}
