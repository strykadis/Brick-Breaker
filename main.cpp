/****************************************************************
*                        Brick-Breaker                          *
*       Gonzalo Diaz Excoffon y Nicolas Carlos Emanuel Sierras  *
*             Todos los derechos reservados(miente)             *
****************************************************************/
/* LIBRARIES */
#include <iostream>
#include "GameModel.h"

using namespace std;


int main(){
    /* CONSTANTS */
    const int width = 1280;
    const int height = 720;

    InitWindow(width, height, "Brick-Breaker");
    SetTargetFPS(60);

    /* STARTS THE GAME */
    while (!WindowShouldClose() && !IsKeyPressed(KEY_Q)) {
        BeginDrawing();
        ClearBackground(GRAY);
        EndDrawing();
    }

    // Cerrar la ventana y liberar recursos
    CloseWindow();
    cout << "Hello, from juego!\n";
}
