#include "Player.h"
#include <iostream>

using namespace std;

APlayer::APlayer()
{
	cout << "Player 생성자" << endl;
}

APlayer::~APlayer()
{
	cout << "Player 소멸자" << endl;
}

void APlayer::Move()
{
	cout << "플레이어 이동하다" << endl;
}
