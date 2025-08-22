#include "raylib.h"

int main(void)
{
  InitWindow(800, 600, "Mi juego con raylib");
  SetTargetFPS(60);

  while (!WindowShouldClose())
  {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawFPS(720, 10);

    DrawRectangle(100, 100, 120, 60, SKYBLUE);
    DrawRectangleLines(100, 100, 120, 60, DARKBLUE);

    DrawCircle(350, 200, 40, ORANGE);

    DrawText("Formas!", 20, 60, 24, DARKGRAY);

    EndDrawing();
  }

  CloseWindow();
  return 0;
}