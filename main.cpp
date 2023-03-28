#include <stdio.h>
#include "raylib.h"

const int WIDTH = 1000;
const int HIGHT = 650;

float barRY = HIGHT / 2;
float barLY = HIGHT / 2 - 100;




int main() {
	InitWindow(WIDTH, HIGHT, "RONG (Red's Pong)");
	SetWindowState(FLAG_VSYNC_HINT);
	while (!WindowShouldClose()) {

		BeginDrawing();
			ClearBackground(BLACK);

			DrawCircle(WIDTH/2, barRY, 10, WHITE);
			DrawRectangle(15, barLY, 15, 200, WHITE);
			DrawRectangle(WIDTH -30, HIGHT / 2 - 100, 15, 200, WHITE);

			DrawFPS(10,10);
		EndDrawing();

	}
	CloseWindow();
	return 0;
}