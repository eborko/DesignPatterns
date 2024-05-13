#pragma once
#include "QuackBehaviour.h"

class Muted : public QuackBehaviour
{
public:
	Muted();
	~Muted();

	void quack();
};