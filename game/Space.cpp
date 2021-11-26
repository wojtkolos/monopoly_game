#include "Space.h"


Space::Space(std::string name1, std::string name2, std::string spaceType, int propertyCost, int freeParking,
	bool occupied, int owned, bool mortgaged, int houses, int rent, int tax,
	std::string actionText1, std::string actionText2)
{
	this->name[0] = name1;
	this->name[1] = name2;
	this->spaceType = spaceType;
	this->propertyCost = propertyCost;
	this->freeParking = freeParking;
	this->occupied = occupied;
	this->owned = owned;
	this->mortgaged = mortgaged;
	this->houses = houses;
	this->rent = rent;
	this->tax = tax;
	this->actionText[0] = actionText1;
	this->actionText[0] = actionText2;
}

Space::~Space()
{
	
}


//functions to set values
void Space::setName(std::string inputName, std::string inputName2) {
	name[0] = inputName;
	name[1] = inputName2;
	houses = 0;
}

void Space::setActionText(std::string inputText, std::string inputText2) {
	actionText[0] = inputText;
	actionText[1] = inputText2;
	houses = 0;
}

void Space::setType(std::string inputType) {
	spaceType = inputType;
}

void Space::setPropertyCost(int inputCost) {
	propertyCost = inputCost;
}

void Space::setFreeParking(int inputMoney) {
	freeParking = inputMoney;
}

void Space::setOccupied(int inputOccupied) {
	occupied = inputOccupied;
}

void Space::setOwnership(int inputOwnership) {
	owned = inputOwnership;
}

void Space::setMortgaged(bool inputMortgage) {
	mortgaged = inputMortgage;
}

void Space::setRent(int inputRent) {
	rent = inputRent;
}

void Space::setTax(int inputTax) {
	tax = inputTax;
}

//functions to get values
std::string Space::getName(int nameIndex) {
	return name[nameIndex];
}

std::string Space::getActionText(int textIndex) {
	return actionText[textIndex];
}

int Space::getPropertyCost() {
	return propertyCost;
}

int Space::getFreeParking() {
	return freeParking;
}

bool Space::getMortgaged() {
	return mortgaged;
}

int Space::getRent() {
	return rent;
}

int Space::getTax() {
	return tax;
}

std::string Space::getType() {
	return spaceType;
}

int Space::getOwnership() {
	return owned;
}

int Space::getHouses() {
	return houses;
}

void Space::setHouses(int inputHouses) {
	houses = inputHouses;
}

bool Space::upgrade() {
	if (houses < 5) {
		rent = rent * 2;
		houses++;
		return true;
	}
	return false;
}