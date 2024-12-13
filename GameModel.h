// GameModel.h
#ifndef GAMEMODEL_H
#define GAMEMODEL_H

#include "raylib.h"
#include "Player.h"
#include "Ball.h"
#include "Blocks.h"

class GameModel {
private:
    Player player;
    Ball ball;
    Blocks blocks;

public:
    GameModel();
    void Update();
    void Reset();
};

#endif // GAMEMODEL_H
