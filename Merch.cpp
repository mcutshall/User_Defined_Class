/*
Program: First User- Defined Class

Purpose: This program defines a "Merch" class for representing an item of merchandise in a retail store. The class definition 
is in a .h file, and the main driver and method implementation are in .cpp files. The main declares an empty vector
of Merch objects, and object attributes are hardcoded.

Developer: Michael Cutshall

Created: 2/22/2016
*/

#include "stdafx.h"
#include "Merch.h"
#include <string>
#include <sstream>

using namespace std;

//create the no-parameter default constructor
Merch::Merch()
{
	setItemNum(0);
	setName("");
	setDescription("");
	setPrice(0.0);
	setQuantity(0);
	setSupplier("");

}

//create the parameter accepting constructor
Merch::Merch(int itemNum, string name, string description, double price, int quantity, string supplier)
{
	setItemNum(itemNum);
	setName(name);
	setDescription(description);
	setPrice(price);
	setQuantity(quantity);
	setSupplier(supplier);

}

//create the set and get methods for each attribute.
void Merch::setItemNum(int itemNum) {
	this->itemNum = itemNum;
}

int Merch::getItemNum() {
	return itemNum;
}

void Merch::setName(string name) {
	this->name = name;
}

string Merch::getName() {
	return name;
}

void Merch::setDescription(string description) {
	this->description = description;
}

string Merch::getDescription() {
	return description;
}

void Merch::setPrice(double price) {
	this->price = price;
}

double Merch::getPrice() {
	return price;
}

void Merch::setQuantity(int quantity) {
	this->quantity = quantity;
}

int Merch::getQuantity() {
	return quantity;
}

void Merch::setSupplier(string supplier) {
	this->supplier = supplier;
}

string Merch::getSupplier() {
	return supplier;
}

//this method converts integers to strings
string getIntegerStr(int number) {

	stringstream sstrm;
	sstrm << number;
	return sstrm.str();
}

//this method converts doubles to strings.
string getDoubleStr(double number) {
	stringstream ss;
	ss << number;
	return ss.str();
}

//this method calls the methods to convert numbers to strings, then returns the attributes as a formatted string. 
string Merch::toString() {	

	string itemStr = getIntegerStr(itemNum);
	string priceStr = getDoubleStr(price);
	string quantityStr = getIntegerStr(quantity);


	return (" Item Number: " + itemStr + "\n" + 
			" Name       : " + name + "\n" +
			" Description: " + description + "\n" +
			" Price      : " + "$" + priceStr + "\n" +
			" Quantity   : " + quantityStr + "\n" +
			" Supplier   : " + supplier + "\n");
}