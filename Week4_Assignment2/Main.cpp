#include "LinkedList.h"
#include "WeatherStats.h"
#include <iostream>
using namespace std;

int main()
{
	int monthsOfStats;
	double rain;
	double snow;
	int sunnyDays;
	WeatherStats weather;
	LinkedList<WeatherStats> stats;
	cout << "Enter the amount of months of weather statistics that you want." << endl;
	cin >> monthsOfStats;
	for (int i = 0; i < monthsOfStats; i++)
	{
		cout << "Enter the amount of rain for month " << i + 1 << endl;
		cin >> rain;
		weather.setAmountOfRain(rain);
		cout << "Enter the amount of snow for month " << i + 1 << endl;
		cin >> snow;
		weather.setAmoutOfSnow(snow);
		cout << "Enter the amout of sunny days for month " << i + 1 << endl;
		cin >> sunnyDays;
		weather.setNumberOfSunnyDays(sunnyDays);
		stats.appendNode(weather);
	}
	cout << "Here is the info you entered" << endl;
	//stats.displayList(); // This is giving me an error. I couldn't figure it out how to overload << operator. 

	system("pause");
	return 0;
}