#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    const int screenWidth = 80;
    const int screenHeight = 24;

    int x = screenWidth / 2;
    int y = screenHeight / 2;

    while (true) {
        // Borrar la pantalla
        system("cls");

        // Dibujar el punto en la posición actual
        gotoxy(x, y);
        cout << "*";

        // Leer la entrada del teclado para mover el punto
        if (GetAsyncKeyState(VK_UP) & 0x8000 && y > 0) {
            y--;
        }
        if (GetAsyncKeyState(VK_DOWN) & 0x8000 && y < screenHeight - 1) {
            y++;
        }
        if (GetAsyncKeyState(VK_LEFT) & 0x8000 && x > 0) {
            x--;
        }
        if (GetAsyncKeyState(VK_RIGHT) & 0x8000 && x < screenWidth - 1) {
            x++;
        }

        // Esperar un breve período de tiempo para controlar la velocidad del movimiento
        Sleep(50);
    }

    return 0;
}
