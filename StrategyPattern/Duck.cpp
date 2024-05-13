#include "Duck.h"

void Duck::SetFlyBehaviour(FlyBehaviour* fb)
{
	flyBehaviour = fb;
}

void Duck::SetQuackBehaviour(QuackBehaviour* qb)
{
	quackBehaviour = qb;
}

void Duck::PerformFly()
{
	flyBehaviour->fly();
}

void Duck::PerformQuack()
{
	quackBehaviour->quack();
}

void Duck::Swim()
{
	std::cout << "All ducks float, even decoys!" << std::endl;
}