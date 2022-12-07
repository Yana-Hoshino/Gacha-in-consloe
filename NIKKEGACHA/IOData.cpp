#include "IOData.h"
#include "gacha.h"
#include <iostream>
IOData User;

int IOData::OutData()
{
	unsigned int OSSR = User._SSR;
	unsigned int OSR = User._SR;
	unsigned int ON = User._N;
	std::cout << "Library" << std::endl;
	std::cout << "SSR = " << OSSR << std::endl << "SR = " << OSR << std::endl << "N = " << ON << std::endl;
	std::cout << "You have already gacha " << User._AllGachaTimes << " times." << std::endl << std::endl;
	return 0;
}

int IOData::InData(int SSR, int SR, int N,int AllGachaTimes)
{
	User._SSR += SSR;
	User._SR += SR;
	User._N += N;
	User._AllGachaTimes += AllGachaTimes;
	return 0;
}

int IOData::Reset()
{
	User._SSR = 0;
	User._SR = 0;
	User._N = 0;
	User._AllGachaTimes = 0;
	return 0;
}