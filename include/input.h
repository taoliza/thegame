// Input module: encapsula el manejo de entrada y traduce a acciones del juego
#ifndef INPUT_H
#define INPUT_H

#include "raylib.h"
#include "game.h"

typedef struct {
	// Acciones de alto nivel
	float moveX; // -1..1
	float moveY; // -1..1
	bool action; // click o acción principal
} InputState;

// Lee el estado de teclado/mouse y llena InputState
void Input_Read(InputState* in);

// Aplica el input al GameState (no modifica render)
void Input_Apply(GameState* g, const InputState* in, float dt);

#endif // INPUT_H
