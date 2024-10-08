#include <iostream>
#include <random>
#include "vector"
#include "Player.h"
#include "Monster.h"
#include "Boar.h"
#include "Goblin.h"
#include "Slime.h"


using namespace std;

int main()
{
	random_device Rand;
	mt19937 gen(Rand());
	uniform_int_distribution<int> dis(0, 5);

	vector<AActor*> Actors;
	vector<ASlime*> Slimes;
	vector<ABoar*> Boars;
	vector<AGoblin*> Goblins;

	srand(time(nullptr));

	int SlimeCount = rand() % 6;
	int BoarCount = rand() % 6;
	int TotalMonsterCount = rand() % 10;
	int GoblinCount = rand() % 6;

	Actors.push_back(new APlayer());

	//APlayer* Player = new APlayer;
	//Player->PlayerMove();
	//cout << endl;
	//delete Player;
	
	//ABoar* Boar = new ABoar();
	//Boar->BoarMove(dis(gen));
	//cout << endl;
	//delete Boar;

	//ASlime* Slime = new ASlime();
	//Slime->SlimeMove(dis(gen));
	//cout << endl;
	//delete Slime;

	for (int i = 0; i < TotalMonsterCount; ++i)
	{
		int Type = rand() % 3;
		if (Type == 0)
		{
			Actors.push_back(new AGoblin());
		}
		else if (Type == 1)
		{
			Actors.push_back(new ASlime());
		}
		else
		{
			Actors.push_back(new ABoar());
		}
	}


	//test

	return 0;
}