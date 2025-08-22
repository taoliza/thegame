// Render module: helpers de dibujo y HUD
#ifndef RENDER_H
#define RENDER_H

#include "raylib.h"
#include "game.h"

void render_scene(const game_state_t* g);
void render_hud(const game_state_t* g);

#endif // RENDER_H
