#include "input.h"
#include <math.h>

void Input_Read(InputState* in) {
	in->moveX = 0.0f;
	in->moveY = 0.0f;
	in->action = false;

	if (IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D)) in->moveX += 1.0f;
	if (IsKeyDown(KEY_LEFT)  || IsKeyDown(KEY_A)) in->moveX -= 1.0f;
	if (IsKeyDown(KEY_DOWN)  || IsKeyDown(KEY_S)) in->moveY += 1.0f;
	if (IsKeyDown(KEY_UP)    || IsKeyDown(KEY_W)) in->moveY -= 1.0f;

	// Normaliza para diagonales
	Vector2 v = { in->moveX, in->moveY };
	float len = sqrtf(v.x * v.x + v.y * v.y);
	if (len > 1e-5f) {
		in->moveX /= len;
		in->moveY /= len;
	}

	if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) || IsKeyPressed(KEY_SPACE)) {
		in->action = true;
	}
}

void Input_Apply(GameState* g, const InputState* in, float dt) {
	g->playerPos.x += in->moveX * g->playerSpeed * dt;
	g->playerPos.y += in->moveY * g->playerSpeed * dt;

	// Ejemplo de uso de acción: teletransportar al mouse si se pulsa
	if (in->action) {
		g->playerPos = GetMousePosition();
	}
}
