#include <iostream>
#include "gacha.h"
#include "introduce.h"
#include "select.h"
using namespace std;
Hintroduce open;
gacha chouka;
select Mselect;
int main() 
{
	int loop = NULL;
	while (loop != '5')
	{
		open.introduce();
		chouka.ShowDATE();
		loop = Mselect.Cselect();
		std::system("cls");
		if (loop == '1')
		{
			chouka.GACHA(10);

		}
		else if (loop == '2')
		{
			chouka.GACHA(1);
		}
		else if (loop == '3')
		{
			unsigned int n = 0;
			cin >> n;
			chouka.GACHA(n);
			cin.clear();
		}
		else if (loop == '4')
		{
			chouka.reset();
		} 
	}
		return 0;
}