#include "WeatherStats.h"
#include <iostream>
using namespace std;
void WeatherStats::setAmountOfRain(double r)
{
	amountOfRain = r;
}
void WeatherStats::setAmoutOfSnow(double s)
{
	amountOfSnow = s;
}
void WeatherStats::setNumberOfSunnyDays(int sunD)
{
	numberOfSunnyDays = sunD;
}
double WeatherStats::getAmountOfRain() const
{
	return amountOfRain;
}
double WeatherStats::getAmountOfSnow() const
{
	return amountOfSnow;
}
int WeatherStats::getNumberOfSunnyDays() const
{
	return numberOfSunnyDays;
}
