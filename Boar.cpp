#include "Boar.h"
#include <iostream>

using namespace std;

ABoar::ABoar()
{

}

ABoar::~ABoar()
{
}

void ABoar::BoarMove(int RandVal)
{
	for (int i = 0; i < RandVal; i++)
	{
		cout << "¸äµÅÁö ÀÌµ¿ÇÏ´Ù" << endl;
	}
}

