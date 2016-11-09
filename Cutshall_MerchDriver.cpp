// Cutshall_Merch.cpp : Defines the entry point for the console application.
//
/*
Program: First User- Defined Class

Purpose: This program defines a "Merch" class for representing an item of merchandise in a retail store. The class definition 
is in a .h file, and the main driver and method implementation are in .cpp files. The main declares an empty vector
of Merch objects, and object attributes are hardcoded.

Developer: Michael Cutshall

Created: 2/22/2016
*/

#include "stdafx.h"
#include <string>
#include <vector>
#include <iterator>
#include <iostream>
#include "Merch.h"

using namespace std;

//Function prototype
void displayInventory(vector<Merch>&);

int main()
{
	//declare empty object vector
	vector<Merch> itemOfInventory;

	//instantiate two objects with parameter accepting constructor
	Merch merchObj1(1000, "Basic Widget", "A basic, good quality widget", 50.00, 15, "Hardware Suppliers of Southern AZ");
	Merch merchObj2(2000, "Industrial Grade Widget", "A High quality Widget", 100.00, 10, "Hardware Suppliers of Southern AZ");
	Merch merchObj3;//instantiate with the no-parameter constructor

	//assign attributes to third object with set methods
	merchObj3.setItemNum(3000);
	merchObj3.setName("Advanced Widget");
	merchObj3.setDescription("An advanced widget of the highest quality");
	merchObj3.setPrice(200.00);
	merchObj3.setQuantity(5);
	merchObj3.setSupplier("Hardware Suppliers of Southern AZ");

	//use push-back to add objects to vector
	itemOfInventory.push_back(merchObj1);
	itemOfInventory.push_back(merchObj2);
	itemOfInventory.push_back(merchObj3);

	//display the contents of the vector.
	displayInventory(itemOfInventory);
}

//display method accepts a reference of the inventory vector to print contents using toString().
void displayInventory(vector<Merch>& itemOfInventory) {
	
	cout << " Items of Inventory: " << "\n\n" << endl;

	for (int i = 0; i < itemOfInventory.size(); ++i) {
		cout << itemOfInventory[i].toString() << "\n";
	}
}
