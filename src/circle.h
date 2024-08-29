#pragma once

#include "raylib.h"
#include "globals.h"

class Circle
{
public:
    Circle();
    Circle(Color color);
    void Init(Color color);
    void Draw();
    void Update();
    void SetPos(float x, float y);

    float x;
    float y;
    float r;
    Color color;
private:

};