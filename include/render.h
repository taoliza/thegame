// Render module: helpers de dibujo y HUD
#ifndef RENDER_H
#define RENDER_H

#include "raylib.h"
#include "game.h"

void Render_Scene(const GameState* g);
void Render_HUD(const GameState* g);

#endif // RENDER_H
