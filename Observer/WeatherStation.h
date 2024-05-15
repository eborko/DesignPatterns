#pragma once
#include "Subject.h"
#include <list>

class WeatherStation : public Subject
{
public:
	WeatherStation();
	~WeatherStation();

	void registerObserver(Observer* observer) override;
	void removeObserver(Observer* observer) override;
	void notifyObservers() override;

	void setTemperature(float temperature);
	void setHumidity(float humidity);
	void setPressure(float pressure);

	float getTemperature() const { return temperature; }
	float getHumidity() const { return humidity; }
	float getPressure() const { return pressure; }

private:
	std::list<Observer*> observers;
	float temperature;
	float humidity;
	float pressure;
};

