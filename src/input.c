#include "input.h"
#include <math.h>

void input_read(input_state_t* in) {
	in->move_x = 0.0f;
	in->move_y = 0.0f;
	in->action = false;

	if (IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D)) in->move_x += 1.0f;
	if (IsKeyDown(KEY_LEFT)  || IsKeyDown(KEY_A)) in->move_x -= 1.0f;
	if (IsKeyDown(KEY_DOWN)  || IsKeyDown(KEY_S)) in->move_y += 1.0f;
	if (IsKeyDown(KEY_UP)    || IsKeyDown(KEY_W)) in->move_y -= 1.0f;

	// Normaliza para diagonales
	Vector2 v = { in->move_x, in->move_y };
	float len = sqrtf(v.x * v.x + v.y * v.y);
	if (len > 1e-5f) {
		in->move_x /= len;
		in->move_y /= len;
	}

	if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) || IsKeyPressed(KEY_SPACE)) {
		in->action = true;
	}
}

void input_apply(game_state_t* g, const input_state_t* in, float dt) {
	g->player_pos.x += in->move_x * g->player_speed * dt;
	g->player_pos.y += in->move_y * g->player_speed * dt;

	// Ejemplo de uso de acción: teletransportar al mouse si se pulsa
	if (in->action) {
	g->player_pos = GetMousePosition();
	}
}
