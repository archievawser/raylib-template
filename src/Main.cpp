#include "raylib/raylib.h"
#include "raylib/raymath.h"


int main(void)
{
	const int screenWidth = 1920;
	const int screenHeight = 1080;

	SetConfigFlags(FLAG_MSAA_4X_HINT);
	InitWindow(screenWidth, screenHeight, "Hello, world!");

	SetTargetFPS(60);

	while (!WindowShouldClose())
	{
		BeginDrawing();

		ClearBackground(BLACK);

		EndDrawing();
	}

	CloseWindow();

	return 0;
}
