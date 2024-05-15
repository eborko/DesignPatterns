#include "WeatherStation.h"
#include "Observer.h"

WeatherStation::WeatherStation()
{
	temperature = 0.0f;
	humidity = 0.0f;
	pressure = 0.0f;
	observers = std::list<Observer*>();
}

WeatherStation::~WeatherStation()
{
}

void WeatherStation::registerObserver(Observer* observer)
{
	observers.push_back(observer);
}

void WeatherStation::removeObserver(Observer* observer)
{
	observers.remove(observer);
}

void WeatherStation::notifyObservers()
{
	for (auto observer : observers)
	{
		observer->update();
	}
}

void WeatherStation::setTemperature(float temperature)
{
	this->temperature = temperature;
	notifyObservers();
}

void WeatherStation::setHumidity(float humidity)
{
	this->humidity = humidity;
	notifyObservers();
}

void WeatherStation::setPressure(float pressure)
{
	this->pressure = pressure;
	notifyObservers();
}