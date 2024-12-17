#ifndef BALL_H
#define BALL_H

#include "raylib.h"

class Ball {

public:
    Ball();
    void Update();

private:
    Vector2 position;
    Vector2 velocity;
    float radius;

};

#endif // BALL_H