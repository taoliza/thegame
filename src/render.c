#include "render.h"

void render_scene(const game_state_t* g) {
	ClearBackground(RAYWHITE);
	DrawCircleV(g->player_pos, 20, PURPLE);
}

void render_hud(const game_state_t* g) {
	(void)g;
	DrawText("WASD/Arrows para mover. Click/Space = accion", 20, 20, 20, BLACK);
	DrawFPS(GetScreenWidth() - 100, 10);
}
