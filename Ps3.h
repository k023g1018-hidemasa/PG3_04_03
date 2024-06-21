#pragma once
#include"Game.h"

class Ps3:public Game
{
public:
	Ps3();
	~Ps3() override;

	void	Play()override;

};

