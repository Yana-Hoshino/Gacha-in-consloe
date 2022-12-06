#include "select.h"
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

