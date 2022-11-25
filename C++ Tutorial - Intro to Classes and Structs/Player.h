#pragma once

// header guard - we define a unique name for the header
#ifndef HEADER_PLAYER_H
#define HEADER_PLAYER_H

class Player
{
public: // all variables and functions below here in the class are visible outside of the class
	int Health;
	float Speed;
	int Money;

public:
	Player();
	Player(int initialHealth);

public:
	void TakeDamage(int amount);
};

#endif // HEADER_PLAYER_H