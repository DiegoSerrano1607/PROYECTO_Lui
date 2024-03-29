#include <iostream>
#include <string>

using namespace std;

int main() {
    const int totalPreguntas = 5;
    const char respuestas[totalPreguntas] = {0, 0, 1, 0, 1};
    const string preguntas[totalPreguntas] = {
        "Que es C++?",
        "Que es una variable?",
        "Que significa 'cout' en C++?",
        "Que es un bucle 'for'?",
        "Cual es el resultado de 5 + 7 * 2?"
    };
    const string opciones[totalPreguntas][3] = {
        {"Un lenguaje de programacion", "Una bebida energetica", "Una marca de automoviles"},
        {"Un contenedor para almacenar datos", "Una funcion", "Una declaracion de estructura"},
        {"Entrada de datos", "Salida de datos", "No significa nada"},
        {"Una instruccion para repetir un bloque de codigo un nomero especofico de veces", "Una declaracion de funcion", "Una condicion logica"},
        {"24", "19", "19.5"}
    };

    int respuestasCorrectas = 0;

    cout << "Bienvenido al examen de C++!" << endl;

    for (int i = 0; i < totalPreguntas; ++i) {
        cout << "\nPregunta " << i + 1 << ": " << preguntas[i] <<endl;

        // Mostrar opciones
        for (int j = 0; j < 3; ++j) {
            cout << j + 1 << ". " << opciones[i][j] << endl;
        }

        // Solicitar respuesta al usuario
        int respuestaUsuario;
        cout << "Ingrese su respuesta (1, 2 o 3): ";
        cin >> respuestaUsuario;

        // Verificar si la respuesta es correcta
        if (respuestaUsuario - 1 == respuestas[i]) {
            cout << "Respuesta correcta!" << endl;
            respuestasCorrectas++;
        } else {
            cout << "Respuesta incorrecta. La respuesta correcta es la opcion " << respuestas[i] + 1 << "." << endl;
        }
    }

    // Mostrar resultados
    cout << "\nExamen completado!" << endl;
    cout << "Respuestas correctas: " << respuestasCorrectas << "/" << totalPreguntas << endl;
    cout << "\nGracias por participar :)"<< endl;

    return 0;
}
