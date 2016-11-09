/*
Program: First User- Defined Class

Purpose: This program defines a "Merch" class for representing an item of merchandise in a retail store. The class definition 
is in a .h file, and the main driver and method implementation are in .cpp files. The main declares an empty vector
of Merch objects, and object attributes are hardcoded.

Developer: Michael Cutshall

Created: 2/22/2016
*/

#pragma once
#ifndef Merch
#define MERCH
#include <string>
#include <ctime>

using namespace std;

class Merch
{
public:

	Merch();//default, no-parameter constructor

	Merch(int, string, string, double, int, string);//parameter accepting constructor

	//setter methods
	void setItemNum(int);
	void setName(string);
	void setDescription(string);
	void setPrice(double);
	void setQuantity(int);
	void setSupplier(string);

	//getter methods
	int getItemNum();
	string getName();
	string getDescription();
	double getPrice();
	int getQuantity();
	string getSupplier();	

	string toString();

private:
	
	//attributes
	string name, description, supplier;
	int itemNum, quantity;
	double price;

			
};
#endif
