#pragma once
#ifndef PROPERTYMANAGER_H
#define PROPERTYMANAGER_H

#include "Property.h"
#include<vector>
#include<string>

using namespace std;

class PropertyManager
{
private:
	vector<Property> properties;

public:
	void addPropertyToList(const Property& p);
	vector<Property> searchByLocation(const string& loc) const;
	vector<Property> searchByPrice(double minPrice, double maxPrice) const;
	void displayAll() const;

};

#endif // !PROPERTYMANAGER_H

