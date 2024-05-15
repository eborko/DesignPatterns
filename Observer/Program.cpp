#include "WeatherStation.h"
#include "CurrentWeatherWidget.h"

int main()
{
	WeatherStation weatherStation;

	CurrentWeatherWidget currentWeatherWidget(&weatherStation);

	weatherStation.setTemperature(25.0f);
	weatherStation.setHumidity(60.0f);
	weatherStation.setPressure(1013.0f);

	return 0;
}