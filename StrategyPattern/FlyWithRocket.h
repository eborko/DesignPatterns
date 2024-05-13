#pragma once
#include "FlyBehaviour.h"
#include <iostream>

class FlyWithRocket : public FlyBehaviour
{
public:
	FlyWithRocket();
	~FlyWithRocket();

	void fly();
};