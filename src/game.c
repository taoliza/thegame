#include "game.h"
#include "input.h"
#include "render.h"

void Game_Init(GameState* g) {
    g->playerPos = (Vector2){ 400, 300 };
    g->playerSpeed = 220.0f;
}

void Game_Update(GameState* g, float dt) {
    InputState in;
    Input_Read(&in);
    Input_Apply(g, &in, dt);

    // Aquí podrías añadir lógica de juego independiente del input
}

void Game_Draw(const GameState* g) {
    Render_Scene(g);
    Render_HUD(g);
}

void Game_Shutdown(GameState* g) { (void)g; }