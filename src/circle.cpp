#include "circle.h"


Circle::Circle()
{
    Init(GRAY);
}

Circle::Circle(Color color)
{
    Init(color);
}

void Circle::Init(Color color)
{
    x = GetRandomValue(100, gameScreenWidth - 100);
    y = GetRandomValue(100, gameScreenHeight - 100);
    r = GetRandomValue(50, 150);
    this->color = color;
}

void Circle::Draw()
{
    DrawCircle(x, y, r, color);
}

void Circle::Update()
{

}

void Circle::SetPos(float x, float y)
{
    this->x = x;
    this->y = y;
}
