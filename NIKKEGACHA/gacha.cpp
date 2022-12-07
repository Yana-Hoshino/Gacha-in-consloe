#include "gacha.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "IOData.h"
unsigned long int AllGachaTimes = 0;
unsigned int SSR = 0;
unsigned int SR = 0;
unsigned int N = 0;
int UserRare = rand() % 100;
int gacha::GACHA(unsigned int times)
{
	srand((int)time(NULL));
	for (unsigned int gachatimes = 0; gachatimes < times; gachatimes++)
	{
		UserRare = rand() % 100;
		RareCheck(UserRare);
		if (AllGachaTimes >= 2.1474836e+09 - 1)
		{
			std::cout << "You have already out of range\n";
			return 0;
		}
		AllGachaTimes++;
	}
	IOData::InData(SSR, SR, N, AllGachaTimes);
	SSR = SR = N = AllGachaTimes = 0;
	return 0;
}

int gacha::RareCheck(int UserRare)
{
	if (UserRare < RareSSR)
	{
		SSR++;
	}
	else if (UserRare < RareSR && UserRare >= RareSSR)
	{
		SR++;
	}
	else
	{
		N++;
	}
	return 0;
}

