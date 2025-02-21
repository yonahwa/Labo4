#include "entrypoint.h"
#include "raylib.h"
#include "Classe.h"
 
Ball ball;
//Creer votre class Engin ici et appeler une fonction start que vous définisser à la classe dans la fonction raylib_start plus bas.
void raylib_start(void){
    SetTargetFPS(30);
    InitWindow(500,900,"Breakout");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        DrawRectangle(225,100,50,10,WHITE);
        DrawCircle(250,150,5,VIOLET);
        EndDrawing();
    }
    CloseWindow();
    return;
}