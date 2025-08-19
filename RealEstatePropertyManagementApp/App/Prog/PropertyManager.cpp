#include "../Headers/PropertyManager.h"
#include <algorithm>
#include <iostream>

using namespace std;

void PropertyManager::addPropertyToList(const Property& p)
{
	properties.push_back(p);
}

vector<Property> PropertyManager::searchByLocation(const string& loc) const
{
	vector<Property> results;

	for (const auto& it : properties)
	{
		if (it.getLocation() == loc)
			results.push_back(it);
	}

	return results;
}

vector<Property> PropertyManager::searchByPrice(double minPrice, double maxPrice) const
{
	vector<Property> results;

	for (const auto& it : properties)
	{
		if (it.getPrice() >= minPrice && it.getPrice() <= maxPrice)
			results.push_back(it);
	}

	sort(results.begin(), results.end(), [](const Property& a, const Property& b)
		{
			return a.getPrice() < b.getPrice();
		});

	return results;
}

void PropertyManager::displayAll() const
{
	for (const auto& it : properties)
		it.DisplayData();
}
