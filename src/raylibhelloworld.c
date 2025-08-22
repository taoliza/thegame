#include "raylib.h"

int main(void)
{
  InitWindow(800, 600, "Mi juego con raylib");
  SetTargetFPS(60);
  Vector2 rectPos = {200, 300};
  float speed = 200.0f; // px/s

  while (!WindowShouldClose())
  {
    float dt = GetFrameTime();
    // Teclado
    if (IsKeyDown(KEY_D))
      rectPos.x += speed * dt;
    if (IsKeyDown(KEY_A))
      rectPos.x -= speed * dt;
    if (IsKeyDown(KEY_S))
      rectPos.y += speed * dt;
    if (IsKeyDown(KEY_W))
      rectPos.y -= speed * dt;

    // Mouse
    Vector2 mouse = GetMousePosition();
    bool click = IsMouseButtonPressed(MOUSE_LEFT_BUTTON);

    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawFPS(720, 10);

    DrawRectangleV(rectPos, (Vector2){80, 40}, click ? RED : BLUE);
    DrawCircleV(mouse, 20, GREEN);

    EndDrawing();
  }

  CloseWindow();
  return 0;
}