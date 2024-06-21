#include "Ps3.h"
#include <stdio.h>

Ps3::Ps3()
{
	printf("PS3を買った\n");
}

Ps3::~Ps3()
{
	printf("バイオハザード5をやめた\n");
}

void Ps3::Play()
{
	printf("バイオハザード5をプレイした\n");
}
