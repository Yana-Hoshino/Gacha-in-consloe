#pragma once
class gacha{
public:
	int RareSSR = 2;
	int RareSR = 33;
	int RareN = 65;
	int GACHA(unsigned int time);
	int RareCheck(int UserRare);
	int InDATE(int SSR, int SR, int N);
	int reset();
	int ShowDATE();
		private:
			unsigned int _SSR = 0;
			unsigned int _SR = 0;
			unsigned int _N = 0;
};

