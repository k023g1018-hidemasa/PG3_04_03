#pragma once
#include"Game.h"

class Wii:public Game
{
public:
	Wii();
	~Wii()override;

	void Play() override;

};

