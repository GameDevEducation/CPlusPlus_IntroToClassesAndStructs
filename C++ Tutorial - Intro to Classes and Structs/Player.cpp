#include "Player.h"

Player::Player() :
	Player(50)
{
}

Player::Player(int initialHealth) :
	Health(initialHealth),
	Speed(5),
	Money(100)
{
}

void Player::TakeDamage(int amount)
{
	Health -= amount;

	if (Health <= 0)
	{
		// handle player death
	}
}