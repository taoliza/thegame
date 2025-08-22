#include "raylib.h"
#include "game.h"

int main(void) {
    InitWindow(800, 600, "Juego modular con raylib");
    SetTargetFPS(60);

    game_state_t game;
    game_init(&game);

    while (!WindowShouldClose()) {
        float dt = GetFrameTime();

        game_update(&game, dt);

        BeginDrawing();
        game_draw(&game);
        EndDrawing();
    }

    game_shutdown(&game);
    CloseWindow();
    return 0;
}