#include "select.h"
#include "gacha.h"
#include "IOData.h"
#include <iostream>

char loop = 0;
int select::Cselect()
{
	std::cin >> loop;
	while (!(loop < 53 && loop > 48))
	{
		std::cout << "Please enter a number in 1-4.\n";
		std::cin >> loop;
	}
	return loop;
}

int select::Cchoose(char loop)
{
	if (loop == '1')
	{
		gacha::GACHA(10);

	}
	else if (loop == '2')
	{
		gacha::GACHA(1);
	}
	else if (loop == '3')
	{
		unsigned int n = 0;
		std::cin >> n;
		gacha::GACHA(n);
		std::cin.clear();
	}
	else if (loop == '4')
	{
		IOData::Reset();
	}
	return 0;
}