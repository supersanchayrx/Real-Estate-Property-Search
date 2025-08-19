#pragma once
#ifndef PROPERTY_H
#define PROPERTY_H

#include<string>
using namespace std;

class Property
{
private:
	int id;
	string type;
	string locations;
	float price;
	float size;

public:
	Property(int id, const string& type, const string& location, float price, float size);

	int getID() const;
	string getType() const;
	string getLocation() const;
	float getPrice() const;
	float getSize() const;

	void DisplayData() const;

};

#endif // !

