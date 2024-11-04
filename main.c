#include <raylib.h>

int main() {
    
    const int screenWidth = 800;
    const int screenHeight = 600;
    int ball_x = 100;
    int ball_y = 100;
    int ball_speed_x = 5;
    int ball_speed_y = 5;
    int ball_radius = 15;

    InitWindow(screenWidth, screenHeight, "My first RAYLIB program!");
    SetTargetFPS(60);

    //SpriteAnimation animation("C:/Projects/C++/R", 64, 64, 5, 1, 6, 1, 10.0f);

    //Vector2 position = { 400, 300 };

    while (WindowShouldClose() == false) {
        BeginDrawing();
        ClearBackground(BLUE);
        ball_x += ball_speed_x;
        ball_y += ball_speed_y;

        if (ball_x + ball_radius >= screenWidth || ball_x - ball_radius <= 0)
        {
            ball_speed_x *= -1;
        }

        if (ball_y + ball_radius >= screenHeight || ball_y - ball_radius <= 0)
        {
            ball_speed_y *= -1;
        }

        DrawCircle(ball_x, ball_y, ball_radius, WHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}