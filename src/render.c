#include "render.h"

void Render_Scene(const GameState* g) {
	ClearBackground(RAYWHITE);
	DrawCircleV(g->playerPos, 20, PURPLE);
}

void Render_HUD(const GameState* g) {
	(void)g;
	DrawText("WASD/Arrows para mover. Click/Space = acción", 20, 20, 20, BLACK);
	DrawFPS(GetScreenWidth() - 100, 10);
}
