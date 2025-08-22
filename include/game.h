#ifndef GAME_H
#define GAME_H
#include "raylib.h"

typedef struct {
    Vector2 player_pos;
    float player_speed;
} game_state_t;

void game_init(game_state_t* g);
void game_update(game_state_t* g, float dt);
void game_draw(const game_state_t* g);
void game_shutdown(game_state_t* g);

#endif