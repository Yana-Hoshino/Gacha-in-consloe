#include <iostream>
#include "gacha.h"
#include "introduce.h"
#include "select.h"
#include "IOData.h"
using namespace std;
select Mselect;

int main() 
{
	char loop = NULL;
	while (loop != '5')
	{
		introduce::Hintroduce();
		Data.OutData();
		loop = Mselect.Cselect();
		std::system("cls");
		Mselect.Cchoose(loop);
	}
		return 0;
}