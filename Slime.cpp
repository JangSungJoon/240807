#include "Slime.h"
#include <iostream>

using namespace std;

ASlime::ASlime()
{
}

ASlime::~ASlime()
{
}

void ASlime::SlimeMove(int RandVal)
{
	for (int i = 0; i < RandVal; i++)
	{
		cout << "슬라임 이동하다" << endl;
	}
}
