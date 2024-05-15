#include "CurrentWeatherWidget.h"
#include "WeatherStation.h"
#include <iostream>

CurrentWeatherWidget::CurrentWeatherWidget(WeatherStation* weatherStation)
{
	this->weatherStation = weatherStation;
	weatherStation->registerObserver(this);

	temperature = 0.0f;
	humidity = 0.0f;
	pressure = 0.0f;
}

CurrentWeatherWidget::~CurrentWeatherWidget()
{
	weatherStation->removeObserver(this);
}

void CurrentWeatherWidget::update()
{
	temperature = weatherStation->getTemperature();
	humidity = weatherStation->getHumidity();
	pressure = weatherStation->getPressure();
	display();
}

void CurrentWeatherWidget::display()
{
	std::cout << "Current weather: " << temperature << "C degrees, " << humidity << "% humidity, " << pressure << " hPa pressure" << std::endl;
}