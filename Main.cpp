#include <iostream>
#include <random>
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


	APlayer* Player = new APlayer;
	Player->PlayerMove();
	cout << endl;
	delete Player;
	
	ABoar* Boar = new ABoar();
	Boar->BoarMove(dis(gen));
	cout << endl;
	delete Boar;

	AGoblin* Goblin = new AGoblin();
	Goblin->GoblinMove(dis(gen));
	cout << endl;
	delete Goblin;

	ASlime* Slime = new ASlime();
	Slime->SlimeMove(dis(gen));
	cout << endl;
	delete Slime;


	//test

	return 0;
}