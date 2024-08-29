#pragma once

#include <string>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#include "raylib.h"
#include "ball.h"
#include "circle.h"

class Game
{
public:
    Game();
    ~Game();
    void InitGame();
    void Reset();
    Game(const Game&) = delete;
    const Game& operator=(const Game& g) = delete;
    Game(Game&&) = delete;
    Game&& operator=(Game&& g) = delete;

    void Update(float dt);
    void HandleInput();
    void UpdateUI();
    void Draw();
    void DrawUI();
    void DrawScreenSpaceUI();
    std::string FormatWithLeadingZeroes(int number, int width);
    void DrawCirclesIntersection(float x1, float y1, float r1, float x2, float y2, float r2);

    bool firstTimeGameStart;
    bool isFirstFrameAfterReset;
    bool isInExitMenu;
    bool paused;
    bool lostWindowFocus;
    bool gameOver;


private:
    //Ball ball;
    Circle c1;
    Circle c2;

    float screenScale;
    RenderTexture2D targetRenderTex;
    Font font;
};