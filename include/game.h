#ifndef GAME_H
#define GAME_H
#include "raylib.h"

typedef struct {
    Vector2 playerPos;
    float playerSpeed;
} GameState;

void Game_Init(GameState* g);
void Game_Update(GameState* g, float dt);
void Game_Draw(const GameState* g);
void Game_Shutdown(GameState* g);

#endif