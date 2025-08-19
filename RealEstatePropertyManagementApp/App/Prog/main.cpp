#include "../Headers/PropertyManager.h"
#include <iostream>

using namespace std;

int HandleUserInput()
{
	char inp;

	cout << "Select how you want to search for properties \n 1. Type in L for search by locations filter\n 2. Type in P for search by budget filter";
	cin >> inp;
	if (inp == 108 || inp == 76)
	{
		return 1;
	}
	else if (inp == 80 || inp == 112)
	{
		return 2;
	}
	else
	{
		return 0;
	}
}

void SearchByLocation(PropertyManager &manager)
{
	string placeInp;
	cin >> placeInp;

	auto placePropertiesList = manager.searchByLocation(placeInp);
	for (auto& it : placePropertiesList)
		it.DisplayData();
}

void FilterByPrice(PropertyManager& manager)
{
	int minPrice, maxPrice;
	cin >> minPrice >> maxPrice;

	auto priceFilteredPropertiesList = manager.searchByPrice(minPrice, maxPrice);
	for (auto& it : priceFilteredPropertiesList)
		it.DisplayData();
}

void AddNewProperty(PropertyManager& manager)
{
	int id;
	string type, location;
	float price, size;

	cout << "\nEnter Property ID: ";
	cin >> id;
	cin.ignore(); 

	cout << "Enter Property Type (e.g., Apartment, Villa, Plot): ";
	getline(cin, type);

	cout << "Enter Location: ";
	getline(cin, location);

	cout << "Enter Price: ";
	cin >> price;

	cout << "Enter Size (sq.ft): ";
	cin >> size;

	manager.addPropertyToList(Property(id, type, location, price, size));

	cout << "\nProperty successfully added!\n\n";
}

int main()
{
	PropertyManager manager;

	manager.addPropertyToList(Property(1, "Apartment", "Pune", 2000000, 900));
	manager.addPropertyToList(Property(2, "RK", "Kolkata", 7500000, 1100));
	manager.addPropertyToList(Property(3, "Villa", "Hyderabad", 9500000, 1250));
	manager.addPropertyToList(Property(4, "Plot", "Banglore", 2000000, 750));

	char firstChoice;
	cout << "Welcome to Real Estate Manager!\n";
	cout << "Do you want to (A)dd a property or (V)iew/Search properties? ";
	cin >> firstChoice;

	if (firstChoice == 'A' || firstChoice == 'a') {
		AddNewProperty(manager);
	}

	cout << "All listed Properties : " << endl;
	manager.displayAll();
	cout << "\n" << endl;

	int userInput = HandleUserInput();

	switch (userInput)
	{
		case 0:

			cout << "Error Command not recogonised\n Please try again\n";

			break;

		case 1:

			cout << "Selected : Filter by location\n Please enter name of the city (eg : Pune)";
			SearchByLocation(manager);

			break;

		case 2:

			cout << "Selected : Filter by Price\n Please enter min and max budget (eg : 5000000 9000000)";
			FilterByPrice(manager);

			break;
	}
	
}