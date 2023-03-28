#include <stdio.h>
#include "raylib.h"

int main() {
	InitWindow(1000, 650, "RONG (Red's Pong)");
	SetWindowState(FLAG_VSYNC_HINT);
	while (!WindowShouldClose()) {

		BeginDrawing();
			ClearBackground(BLACK);

			DrawCircle(100, 100, 10, WHITE);

			DrawFPS(10,10);
		EndDrawing();

	}
	


	CloseWindow();
	return 0;
}