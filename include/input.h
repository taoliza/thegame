// Input module: encapsula el manejo de entrada y traduce a acciones del juego
#ifndef INPUT_H
#define INPUT_H

#include "raylib.h"
#include "game.h"

typedef struct {
	// Acciones de alto nivel
	float move_x; // -1..1
	float move_y; // -1..1
	bool action;  // click o acción principal
} input_state_t;

// Lee el estado de teclado/mouse y llena input_state_t
void input_read(input_state_t* in);

// Aplica el input al game_state_t (no modifica render)
void input_apply(game_state_t* g, const input_state_t* in, float dt);

#endif // INPUT_H
