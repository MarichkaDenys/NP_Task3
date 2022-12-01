#pragma once
#include <iostream>
using namespace std;

template <class T>

void  WriteToConsoleTheOldestItemsWithAge(T* items, int count)
{
	int maxAge = items[0].GetAge();  int maxAgeIdx = 0;
	for (int i = 1; i < count; i++)
	{
		if (items[i].GetAge() > maxAge)
		{
			maxAge = items[i].GetAge();
			maxAgeIdx = i;
		}
	}
	items[maxAgeIdx].WriteToConsole();
}

template <class T>
void WriteToConsoleTheLatestItemsWithAge(T* items, int count)
{
	int minAge = items[0].GetAge();  int minAgeIdx = 0;
	for (int i = 1; i < count; i++)
	{
		if (items[i].GetAge() < minAge)
		{
			minAge = items[i].GetAge();
			minAgeIdx = i;
		}
	}
	items[minAgeIdx].WriteToConsole();
}

template <class T>
void WriteToConsoleTheMostExpensiveItemsWithAge(T* items, int count)
{
	double maxPrice = items[0].GetPrice(); int maxPriceIdx = 0;
	for (int i = 1; i < count; i++)
	{
		if (items[i].GetPrice() > maxPrice)
		{
			maxPrice = items[i].GetPrice();
			maxPriceIdx = i;
		}
	}
	items[maxPriceIdx].WriteToConsole();
}

template <class T>
void WriteToConsoleTheMostCheaperItemsWithAge(T* items, int count)
{
	double minPrice = items[0].GetPrice(); int minPriceIdx = 0;
	for (int i = 1; i < count; i++)
	{
		if (items[i].GetPrice() < minPrice)
		{
			minPrice = items[i].GetPrice();
			minPriceIdx = i;
		}
	}
	items[minPriceIdx].WriteToConsole();
}