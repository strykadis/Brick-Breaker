#ifndef BALL_H
#define BALL_H

#include "raylib.h"

class Ball {
private:
    Vector2 position;
    Vector2 speed;
    float radius;

public:
    Ball();
    void Update();
    void Draw();
};

#endif // BALL_H