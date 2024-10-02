#pragma once

#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include "Enemy.h"
#include "Player.h"
#include "Wall.h"

class Renderer
{
    public:
        SDL_Renderer* renderer;
        Renderer(SDL_Window* window);
        ~Renderer();
        void Reset();
        void Draw(int x, int y, int width, int height, Uint8 r, Uint8 g, Uint8 b, Uint8 a);
        void Draw(Player* player);
        void Draw(Wall* walls[4]);
        void Draw(Enemy* enemies[1]);
};