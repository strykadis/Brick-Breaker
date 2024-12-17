#include "Player.h"

Player::Player(Rectangle initPaddle, float velocity)
{
    this->paddle = initPaddle;
    this->velocity = velocity;
}

void Player::Update(changes newStats)
{
    this->velocity += newStats.velocity;
}

/* GETTERS */
Rectangle Player::getPaddle()
{
    return this->paddle;
}

float Player::getVelocity()
{
    return this->velocity;
}