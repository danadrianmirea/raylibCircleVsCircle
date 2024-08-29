#include <raylib.h>
#include "game.h"
#include "globals.h"

int main()
{
    //SetConfigFlags(FLAG_WINDOW_UNDECORATED);
    InitWindow(gameScreenWidth, gameScreenHeight, "Circle vs Circle");
    SetWindowPosition(50, 50);
    //HideCursor();

    InitAudioDevice();
    SetMasterVolume(0.22f);
    SetExitKey(KEY_NULL);

    Game game;
    //ToggleBorderlessWindowed();
    SetTargetFPS(144);

    float dt = 0.0f;

    while (!exitWindow)
    {
        dt = GetFrameTime();
        game.Update(dt);
        game.Draw();
    }

    CloseAudioDevice();
    CloseWindow();

    return 0;
}