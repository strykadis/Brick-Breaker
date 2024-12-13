#ifndef BLOCKS_H
#define BLOCKS_H

#include "raylib.h"
#include <vector>


class Blocks {
private:
    std::vector<Rectangle> blocks;

public:
    Blocks();
    void Update();
    void Draw();
};

#endif // BLOCKS_H