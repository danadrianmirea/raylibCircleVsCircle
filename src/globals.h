#pragma once
#include <raylib.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))


//#define AM_RAY_DEBUG

extern Color darkGreen;
extern Color grey;
extern Color yellow;
extern int windowWidth;
extern int windowHeight;
extern const int gameScreenWidth;
extern const int gameScreenHeight;
extern bool exitWindow;
extern bool exitWindowRequested;
extern bool fullscreen;
extern const int minimizeOffset;
extern float borderOffsetWidth;
extern float borderOffsetHeight;

inline bool IsPointInCircle(float px, float py, float cx, float cy, float r) {
    float dx = px - cx;
    float dy = py - cy;
    return (dx * dx + dy * dy) <= (r * r);
}

// Function to get the minimum of two numbers
inline float Min(float a, float b) {
    return (a < b) ? a : b;
}

// Function to get the maximum of two numbers
inline float Max(float a, float b) {
    return (a > b) ? a : b;
}