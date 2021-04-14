#ifndef __GAME_HPP__
#define __GAME_HPP__

#include <iostream>

#include "game.hpp"
#include "resources.hpp"
#include "render.hpp"
#include "shader.hpp"
class Game
{
private:
	Render *render;
public:
	~Game();
	Game() {};

	void init();
	void build();
};

#endif // __GAME_HPP__