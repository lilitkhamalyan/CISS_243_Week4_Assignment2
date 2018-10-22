#ifndef WEATHERSTATS_H
#define WEATHERSTATS_H
#include "LinkedList.h"
#include <iostream>
using namespace std;

class WeatherStats
{
private:
	double amountOfRain;
	double amountOfSnow;
	int numberOfSunnyDays;
public:
	WeatherStats()
	{
		amountOfRain = 0.0;
		amountOfSnow = 0.0;
		numberOfSunnyDays = 0;
	}
	WeatherStats(double r, double s, int sunD)
	{
		amountOfRain = r;
		amountOfSnow = s;
		numberOfSunnyDays = sunD;
	}
	void setAmountOfRain(double);
	void setAmoutOfSnow(double);
	void setNumberOfSunnyDays(int);
	double getAmountOfRain() const;
	double getAmountOfSnow() const;
	int getNumberOfSunnyDays() const;
};
#endif


