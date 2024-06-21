#include "Wii.h"
#include <stdio.h>

Wii::Wii()
{
	printf("Wiiを買った\n");
}

Wii::~Wii()
{
	printf("ドラゴンクエストバトルロードをやめた\n");
}

void Wii::Play()
{
	printf("ドラゴンクエストバトルロードを遊んだ\n");
}
