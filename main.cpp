#include <stdio.h>
#include "raylib.h"

const int WIDTH = 1000;
const int HIGHT = 650;

float barRY = HIGHT / 2 - 100;
float barLY = HIGHT / 2 - 100;

float barRYaceleration;
float barLYaceleration; 




int main() {
	InitWindow(WIDTH, HIGHT, "RONG (Red's Pong)");
	SetWindowState(FLAG_VSYNC_HINT);
//main loop
	while (!WindowShouldClose()) {
	//check keys and do stuff with them	
		if (IsKeyDown(KEY_W)) barRYaceleration -= 2.0f;
		if (IsKeyDown(KEY_S)) barRYaceleration += 2.0f;
	

	//make aceleration on the bars
		if (barRYaceleration > 0) barRYaceleration -= 0.5f;
		if (barRYaceleration < 0) barRYaceleration += 0.5f;
		barRY += barRYaceleration;

		//printf("%f \n", barRYaceleration);


		BeginDrawing();
			ClearBackground(BLACK);
			DrawFPS(10, 10);
			DrawCircle(WIDTH/2, HIGHT/2, 10, WHITE);
			DrawRectangle(15, barLY, 15, 200, WHITE);
			DrawRectangle(WIDTH -30, barRY, 15, 200, WHITE);

			
		EndDrawing();

	}
	CloseWindow();
	return 0;
}