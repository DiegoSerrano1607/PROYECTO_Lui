#include <iostream>

using namespace std;

int main() {
    char operador;
    double num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el operador (+, -, *, /): ";
    cin >> operador;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    double resultado;

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                cout << "Error: division por cero." <<endl;
                return 1; // Salir del programa con código de error
            }
            break;
        default:
            cout << "Operador invalido." <<endl;
            return 1; // Salir del programa con código de error
    }

    cout << "Resultado: " << resultado << endl;
    cout<< "\n Gracias por utilizar la calculadora :)"<<endl;

    return 0;
}
