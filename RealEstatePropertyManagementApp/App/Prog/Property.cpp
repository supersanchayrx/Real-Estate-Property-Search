#include "../Headers/Property.h"
#include <iostream>

using namespace std;

Property::Property(int id, const string& type, const string& location, float price, float size)
	: id(id), type(type), locations(location), price(price), size(size) 
{
}

int Property::getID() const
{
	return id;
}

string Property::getLocation() const
{
	return locations;
}

float Property::getPrice() const
{
	return price;
}

float Property::getSize() const
{
	return size;
}

void Property::DisplayData() const
{
	cout << "ID : " << id << " | TYPE : " << type << " | LOCATION : " << locations << " | PRICE $" << price << " | SIZE : " << size << " (in sq feet)\n";
}
