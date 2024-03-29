#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string decimalToHexadecimal(int decimal) {
    stringstream ss;
    ss << hex << decimal; // Convierte el número decimal a hexadecimal
    return ss.str(); // Retorna el valor hexadecimal como una cadena
}

int main() {
    int decimal;
    cout << "Ingrese un numero decimal: ";
    cin >> decimal;

    string hexadecimal = decimalToHexadecimal(decimal);
    cout << "El numero hexadecimal equivalente es: " << hexadecimal <<endl;

    return 0;
}
