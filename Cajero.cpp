#include <iostream>

using namespace std;

int main() {
    int saldo = 1000; // saldo inicial

    cout << "Bienvenido al Cajero Automatico" << endl;
    cout << "Su saldo actual es: Q" << saldo << endl;

    int opcion;
    do {
        cout << "\nPor favor, seleccione una opcion:" <<endl;
        cout << "1. Retirar dinero" << endl;
        cout << "2. Depositar dinero" << endl;
        cout << "3. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int cantidad;
                cout << "Ingrese la cantidad a retirar: ";
                cin >> cantidad;
                if (cantidad > saldo) {
                    cout << "Saldo insuficiente" << endl;
                } else {
                    saldo -= cantidad;
                    cout << "Retiro exitoso" << endl;
                    cout << "Saldo restante: Q" << saldo << endl;
                }
                break;
            }
            case 2: {
                int cantidad;
                cout << "Ingrese la cantidad a depositar: ";
                cin >> cantidad;
                saldo += cantidad;
                cout << "Deposito exitoso" << endl;
                cout << "Saldo actual: Q" << saldo << endl;
                break;
            }
            case 3:
                cout << "Gracias por utilizar nuestro servicio. ¡Hasta luego!" <<endl;
                break;
            default:
                cout << "Opcion inválida. Por favor, seleccione una opcion valida." << endl;
                break;
        }
    } while (opcion != 3);

    return 0;
}
