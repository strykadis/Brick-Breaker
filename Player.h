#ifndef PLAYER_H
#define PLAYER_H

#include "raylib.h"

struct changes
{
    float velocity = 0;
};

class Player {
public:
    Player(Rectangle initPaddle, float velocity);
    void Update(changes newStats);
    
    /* GETTERS */
    Rectangle getPaddle();
    float getVelocity();
    
private:
    Rectangle paddle;
    float velocity;
};

#endif // PLAYER_H