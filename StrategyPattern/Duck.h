#pragma once
#include "FlyBehaviour.h"
#include "QuackBehaviour.h"
#include <iostream>

class Duck
{
private:
	FlyBehaviour* flyBehaviour;
	QuackBehaviour* quackBehaviour;

public:
	void SetFlyBehaviour(FlyBehaviour* fb);

	void SetQuackBehaviour(QuackBehaviour* qb);

	void PerformFly();

	void PerformQuack();

	void Swim();
};

