#include "gacha.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
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
	InDATE(SSR, SR, N);
	SSR = SR = N = 0;
	return 0;
}

int gacha::InDATE(int SSR, int SR, int N) 
{
	_SSR += SSR;
	_SR += SR;
	_N += N;
	return 0;
}

int gacha::reset()
{
	_SSR = 0;
	_SR = 0;
	_N = 0;
	AllGachaTimes = 0;
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

int gacha::ShowDATE()
{
	unsigned int OSSR = _SSR;
	unsigned int OSR = _SR;
	unsigned int ON = _N;
	std::cout << "Libiary" << std::endl;
	std::cout << "SSR = " << OSSR << std::endl << "SR = " << OSR << std::endl << "N = " << ON << std::endl;
	std::cout << "You have already gacha " << AllGachaTimes << " times." << std::endl << std::endl;
	return 0;
}