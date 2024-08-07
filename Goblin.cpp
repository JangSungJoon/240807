#include "Goblin.h"
#include <iostream>

using namespace std;

AGoblin::AGoblin()
{
}

AGoblin::~AGoblin()
{
}

void AGoblin::GoblinMove(int RandVal)
{
	for (int i = 0; i < RandVal; i++)
	{
		cout << "고블린 이동하다" << endl;
	}
}
