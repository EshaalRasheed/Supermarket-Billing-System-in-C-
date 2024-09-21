#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Item
{
protected:
	string name;
	int quantity;
	double price;
public:
	Item() :name(" "), quantity(0), price(0.0)
	{
	}
	Item(string n, int q, double p) :name(n), quantity(q), price(p)
	{}
	virtual double calculateCost() = 0;
	virtual void display()
	{
		cout << "Item Name = " << name << endl;
		cout << "Price = " << price << endl;
		cout << "Quantity = " << quantity << endl;
		cout << "Total price = " << calculateCost() << endl;
	}
};
class GroceryItem :public Item
{
protected:
	string category;
public:
	GroceryItem() :Item(), category(" ")
	{}
	GroceryItem(string n, int q, double p, string ct) :Item(n, q, p), category(ct)
	{

	}
	double calculateCost()
	{
		return quantity * price;
	}
	void Grocery()
	{
		cout << "Welcome to grocery section" << endl;
		cout << "Enter name : "; cin >> name;
		cout << "Enter quantity : "; cin >> quantity;
		cout << "Enter price : "; cin >> price;
		cout << "Enter category : "; cin >> category;
	}
	void display()
	{
		cout << "Category = " << category << endl;
		Item::display();
	}
};
class HouseholdItem :public Item
{
protected:
	string brand;
public:
	HouseholdItem() :Item(), brand(" ")
	{}
	HouseholdItem(string n, int q, double p, string b) :Item(n, q, p), brand(b)
	{
	}
	double calculateCost()
	{
		return quantity * price;
	}
	void Household()
	{
		cout << "Welcome to household section" << endl;
		cout << "Enter name : "; cin >> name;
		cout << "Enter quantity : "; cin >> quantity;
		cout << "Enter price : "; cin >> price;
		cout << "Enter brand : "; cin >> brand;
	}
	void display()
	{
		cout << "Brand = " << brand << endl;
		Item::display();
	}
};
class ElectronicSection :public Item
{
protected:
	string manufacturer;
public:
	ElectronicSection() :Item(), manufacturer(" ")
	{}
	ElectronicSection(string n, int q, double p, string m) :Item(n, q, p), manufacturer(m)
	{
	}
	double calculateCost()
	{
		return 0.50 * quantity * price;
	}
	void Electronics()
	{
		cout << "Welcome to Electronics Section" << endl;
		cout << "Enter name : "; cin >> name;
		cout << "Enter quantity : "; cin >> quantity;
		cout << "Enter price : "; cin >> price;
		cout << "Enter manufacturer : "; cin >> manufacturer;
	}
	void display()
	{
		cout << "Manufacturer = " << manufacturer << endl;
		Item::display();
	}
};
class StationaryItems :public Item
{
protected:
	string colour;
public:
	StationaryItems() :Item(), colour(" ")
	{}
	StationaryItems(string n, int q, double p, string sc) :Item(n, q, p), colour(sc)
	{
	}
	double calculateCost()
	{
		return quantity * price;
	}
	void Stationary()
	{
		cout << "Welcome to Stationary Section" << endl;
		cout << "Enter name : "; cin >> name;
		cout << "Enter quantity : "; cin >> quantity;
		cout << "Enter price : "; cin >> price;
		cout << "Enter colour : "; cin >> colour;
	}
	void display()
	{
		cout << "Colour = " << colour << endl;
		Item::display();
	}
};
class CosmeticsSection :public Item
{
protected:
	string company;
public:
	CosmeticsSection() :Item(), company(" ")
	{}
	CosmeticsSection(string n, int q, double p, string c) :Item(n, q, p), company(c)
	{}
	double calculateCost()
	{
		return 0.20 * quantity * price;
	}
	void Cosmetics()
	{
		cout << "Welcome to Cosmetics Section" << endl;
		cout << "Enter name : "; cin >> name;
		cout << "Enter quantity : "; cin >> quantity;
		cout << "Enter price : "; cin >> price;
		cout << "Enter company : "; cin >> company;
	}
	void display()
	{
		cout << "Company = " << company << endl;
		Item::display();
	}
};
class BakeryItems :public Item
{
protected:
	string flavour;
public:
	BakeryItems() :Item(), flavour(" ")
	{
	}
	BakeryItems(string n, int q, double p, string f) :Item(n, q, p), flavour(f)
	{}
	double calculateCost()
	{
		return 0.35 * quantity * price;
	}
	void Bakery()
	{
		cout << "Welcome to Bakery Items" << endl;
		cout << "Enter name : "; cin >> name;
		cout << "Enter quantity : "; cin >> quantity;
		cout << "Enter price : "; cin >> price;
		cout << "Enter Flavour : "; cin >> flavour;
	}
	void display()
	{
		cout << "Flavour = " << flavour << endl;
		Item::display();
	}
};
class FrozenFood :public Item
{
protected:
	string ingredients;
public:
	FrozenFood() :Item(), ingredients(" ")
	{
	}
	FrozenFood(string n, int q, double p, string i) :Item(n, q, p), ingredients(i)
	{
	}
	double calculateCost()
	{
		return quantity * price;
	}
	void Frozen()
	{
		cout << "Welcome to Frozen Food" << endl;
		cout << "Enter name : "; cin >> name;
		cout << "Enter quantity : "; cin >> quantity;
		cout << "Enter price : "; cin >> price;
		cout << "Enter ingredients : "; cin >> ingredients;
	}
	void display()
	{
		cout << "Ingredients = " << ingredients << endl;
		Item::display();
	}
};
class BeveragesSection :public Item
{
protected:
	int expirydate;
public:
	BeveragesSection() :Item(), expirydate(0)
	{
	}
	BeveragesSection(string n, int q, double p, int e) :Item(n, q, p), expirydate(e)
	{
	}
	double calculateCost()
	{
		return quantity * price;
	}
	void Beverages()
	{
		cout << "Welcome to Beverages Section" << endl;
		cout << "Enter name : "; cin >> name;
		cout << "Enter quantity : "; cin >> quantity;
		cout << "Enter price : "; cin >> price;
		cout << "Enter expirydate : "; cin >> expirydate;
	}
	void display()
	{
		cout << "Expiry Date = " << expirydate << endl;
		Item::display();
	}
};
int main()
{
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tWELCOME TO SUPERMARKET BILLING SYSTEM\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << endl;
	cout << "1.Grocery Items" << endl;
	cout << "2.Household Items" << endl;
	cout << "3.Electronics Section" << endl;
	cout << "4.Stationary Items" << endl;
	cout << "5.Cosmetics Section" << endl;
	cout << "6.Bakery Items" << endl;
	cout << "7.Frozen Food" << endl;
	cout << "8.Beverages" << endl;
	cout << endl;
	Item* it;
	it = new GroceryItem;
	GroceryItem g;
	g.Grocery();
	cout << endl;
	it = new HouseholdItem;
	HouseholdItem h;
	h.Household();
	cout << endl;
	it = new ElectronicSection;
	ElectronicSection e;
	e.Electronics();
	cout << endl;
	it = new StationaryItems;
	StationaryItems s;
	s.Stationary();
	cout << endl;
	it = new CosmeticsSection;
	CosmeticsSection c;
	c.Cosmetics();
	cout << endl;
	it = new BakeryItems;
	BakeryItems b;
	b.Bakery();
	cout << endl;
	it = new FrozenFood;
	FrozenFood f;
	f.Frozen();
	cout << endl;
	it = new BeveragesSection;
	BeveragesSection r;
	r.Beverages();
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tINVOICE\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << endl;
	it = &g;
	it->display();
	cout << "..........................................................................." << endl;
	it = &h;
	it->display();
	cout << "..........................................................................." << endl;
	it = &e;
	it->display();
	cout << "............................................................................" << endl;
	it = &s;
	it->display();
	cout << "............................................................................" << endl;
	it = &c;
	it->display();
	cout << "............................................................................." << endl;
	it = &b;
	it->display();
	cout << "..............................................................................." << endl;
	it = &f;
	it->display();
	cout << "................................................................................" << endl;
	it = &r;
	it->display();
	cout << ".................................................................................." << endl;
	double totalbill = g.calculateCost() + h.calculateCost() + e.calculateCost() + s.calculateCost() + c.calculateCost() + b.calculateCost() + f.calculateCost() + r.calculateCost();
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTotal Bill = " << totalbill << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTHANK YOU FOR SHOPPING\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << endl;
	ofstream outputFile("supermarket_billing.txt"); 
	if (!outputFile)
	{
		cout << "Failed to create the file." << endl;
		return 1;
	}
	outputFile << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tWELCOME TO SUPERMARKET BILLING SYSTEM\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << endl;
	outputFile << "1. Grocery Items" << endl;
	outputFile << "2. Household Items" << endl;
	outputFile << "3. Electronicsitems" << endl;
	outputFile << "4. stationaryItems" << endl;
	outputFile << "5. cosmaticsItems" << endl;
	outputFile << "6. bakeryItems" << endl;
	outputFile << "7. frozenItems" << endl;
	outputFile << "8. beaverageSection" << endl;
	outputFile.close();
	cout << "File created successfully." << endl;
	return 0;
}
