// C++ Tutorial - Intro to Classes and Structs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Player.h"

//class Player
//{
//public: // all variables and functions below here in the class are visible outside of the class
//	int Health = 100;
//	float Speed = 5;
//	int Money = 327;
//
//public:
//	void TakeDamage(int amount);
//};
//
//void Player::TakeDamage(int amount)
//{
//	Health -= amount;
//
//	if (Health <= 0)
//	{
//		// handle player death
//	}
//}

struct Location
{
	float X;
	float Y;
	float Z;

	Location() :
		Location(0, 0, 0)
	{

	}

	Location(float inX, float inY, float inZ) :
		X(inX), Y(inY), Z(inZ)
	{

	}
};

void AttackPlayer(Player& player)
{
	player.TakeDamage(20);
}

int main()
{
	Player Player1;
	Player Player2(200);
	Location Position1;

	std::cout << Position1.X << ", " << Position1.Y << ", " << Position1.Z << std::endl;

	std::cout << "Player 1 Health: " << Player1.Health << std::endl;
	std::cout << "Player 2 Health: " << Player2.Health << std::endl;

	//Player1.Health -= 10;
	//Player1.TakeDamage(10);

	AttackPlayer(Player1);
	std::cout << "Player 1 Health is now: " << Player1.Health << std::endl;

}
