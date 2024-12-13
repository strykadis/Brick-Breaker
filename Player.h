#ifndef PLAYER_H
#define PLAYER_H

#include "raylib.h"

class Player {
private:
    Rectangle paddle;
    float speed;

public:
    Player();
    void Update();
    void Draw();
};

#endif // PLAYER_H