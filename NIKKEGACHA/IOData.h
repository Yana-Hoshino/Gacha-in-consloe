#pragma once
class IOData
{
public:
	static int InData(int SSR, int SR, int N, int AllGachaTimes);
	static int OutData();
	static int Reset();
private:
	unsigned int _SSR = 0;
	unsigned int _SR = 0;
	unsigned int _N = 0;
	unsigned int _AllGachaTimes = 0;
};

