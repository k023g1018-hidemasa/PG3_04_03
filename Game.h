#pragma once
//
class Game
{
public:
	
	Game();
	virtual ~Game();

	virtual void Play() = 0;
protected:
	//const char* name;

};


