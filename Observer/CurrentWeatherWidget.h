#pragma once

#include "Observer.h"
#include "WeatherStation.h"
#include "DataPresenter.h"

class CurrentWeatherWidget : public Observer, public DataPresenter
{
public:
	CurrentWeatherWidget(WeatherStation* weatherStation);
	~CurrentWeatherWidget();

	void update() override;
	void display() override;

private:
	WeatherStation* weatherStation;
	float temperature;
	float humidity;
	float pressure;
};

