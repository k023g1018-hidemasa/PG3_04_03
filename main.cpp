//#include <stdio.h>x
#include"Game.h"
#include"Ps3.h"
#include"Wii.h"

int main() {

	Game* game[2]{};
	for (int i = 0; i < 2; i++) {
		if (i == 0)
		{
			game[i] = new Wii;
		}
		else
		{
			game[i] = new Ps3;
		}
	}

	for (int i = 0; i < 2; i++) {
		game[i]->Play();
	}

	for (int i = 0; i < 2; i++) {
		delete game[i];
	}




	return 0;
}