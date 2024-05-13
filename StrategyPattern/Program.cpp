#pragma once

#include <iostream>
#include "Duck.h"
#include "FlyWithWings.h"
#include "FlyWithRocket.h"
#include "Quack.h"
#include "Squick.h"

int main()
{
	Duck* mallard = new Duck();
	mallard->SetFlyBehaviour(new FlyWithWings());
	mallard->SetQuackBehaviour(new Quack());
	mallard->PerformFly();
	mallard->PerformQuack();
	mallard->Swim();

	Duck* rocketDuck = new Duck();
	rocketDuck->SetFlyBehaviour(new FlyWithRocket);
	rocketDuck->SetQuackBehaviour(new Squick());
	rocketDuck->PerformFly();
	rocketDuck->PerformQuack();
	rocketDuck->Swim();

	mallard = nullptr;
	rocketDuck = nullptr;

	delete mallard;
	delete rocketDuck;

	return 0;	
}