#include <iostream>
#include "introduce.h"
using namespace std;
string open = "This is a Nikke Gacha Simulator in console.\n";
char select = NULL;

int Hintroduce::introduce()
{
	cout << open;
	cout << "1.10 times gacha.\n";
	cout << "2.1 times gacha.\n";
	cout << "3.customize gacha\n";
	cout << "4.Reset\n";
	cout << "5.Exit\n\n";
	return 0;
}