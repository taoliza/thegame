#include "raylib.h"
#include "game.h"

int main(void) {
    InitWindow(800, 600, "Juego modular con raylib");
    SetTargetFPS(60);

    GameState game;
    Game_Init(&game);

    while (!WindowShouldClose()) {
        float dt = GetFrameTime();

        Game_Update(&game, dt);

        BeginDrawing();
        Game_Draw(&game);
        EndDrawing();
    }

    Game_Shutdown(&game);
    CloseWindow();
    return 0;
}