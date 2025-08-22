#include "game.h"
#include "input.h"
#include "render.h"

void game_init(game_state_t* g) {
    g->player_pos = (Vector2){ 400, 300 };
    g->player_speed = 220.0f;
}

void game_update(game_state_t* g, float dt) {
    input_state_t in;
    input_read(&in);
    input_apply(g, &in, dt);

    // Lógica de juego independiente del input
}

void game_draw(const game_state_t* g) {
    render_scene(g);
    render_hud(g);
}

void game_shutdown(game_state_t* g) { (void)g; }