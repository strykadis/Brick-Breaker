#include "Ball.h"

Ball::Ball() : position({ 400, 300 }), velocity({ 20.0f, -20.0f }), radius(10.0f) {}

void Ball::Update() {
    position.x += velocity.x * GetFrameTime();
    position.y += velocity.y * GetFrameTime();

}