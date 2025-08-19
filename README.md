🏠 Real Estate Property Search (C++)

A minimal machine coding project in C++ that demonstrates object-oriented design and use of STL containers/algorithms.

Users can:

List (add) new properties by entering details (type, location, price, size).
View all properties currently listed.
Search properties by location.
Filter properties by budget range (min–max).


🚀 Features

Object-oriented design with multiple classes (Property, PropertyManager).
Uses STL (vector, sort, find_if) for property storage & search.
Modular project structure with headers (.h) and implementation (.cpp).
Interactive console-based menu.

🛠️ Build & Run

Clone the repo:
git clone https://github.com/supersanchayrx/Real-Estate-Property-Search.git
cd <repoLocation>

Compile:
g++ main.cpp Property.cpp PropertyManager.cpp -o RealEstateApp

Run:
./RealEstateApp

📖 Example Usage
Welcome to Real Estate Manager!
Do you want to (A)dd a property or (V)iew/Search properties? A

Enter Property ID: 5
Enter Property Type (e.g., Apartment, Villa, Plot): Studio
Enter Location: Delhi
Enter Price: 3000000
Enter Size (sq.ft): 500

✅ Property successfully added!

All listed Properties:
ID: 1 | Type: Apartment | Location: Pune | Price: 2000000 | Size: 900
...
ID: 5 | Type: Studio | Location: Delhi | Price: 3000000 | Size: 500

📌 Skills Demonstrated

C++ OOP (classes, encapsulation, constructors, member functions).

STL containers & algorithms (vector, sort, custom comparator, etc.).

Machine coding practices (modular headers, clean structure).
