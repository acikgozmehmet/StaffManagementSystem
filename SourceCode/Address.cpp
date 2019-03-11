#include "Address.h"


Address::Address() :buildingNumber(0), streetName("Unknown"), cityName("Unknown"), stateName("Unknown"), zipCode(0) {}

Address::Address(int bN, string sN, string cN, string stN, int zC)
	: buildingNumber(bN), streetName(sN), cityName(cN), stateName(stN), zipCode(zC) {}

Address::Address(const Address& other)
	: buildingNumber(other.buildingNumber), streetName(other.streetName), cityName(other.cityName),
	stateName(other.stateName), zipCode(other.zipCode) {}

Address::~Address() {}

void Address::setBuildingNumber(int bN) { this->buildingNumber = bN; }
void Address::setStreetName(string sN) { this->streetName = sN; }
void Address::setCityName(string cN) { this->cityName = cN; }
void Address::setStateName(string stN) { this->stateName = stN; }
void Address::setZipCode(int zC) { this->zipCode = zC; }


int Address::getBuildingNumber() const { return buildingNumber; }
string Address::getStreetName() const { return streetName; }
string Address::getCityName() const { return cityName; }
string Address::getStateName() const { return stateName; }
int Address::getZipCode() const { return zipCode; }





void Address::input() {
	cout << "Building Number : "; cin >> buildingNumber;	cin.ignore();
	cout << "Street     : ";	getline(cin, streetName);
	cout << "City       : ";	getline(cin, cityName);
	do {
		cout << "State  : ";	getline(cin, stateName);
	} while (stateName.length() > 2);

	cout << "Zip Code        : ";	cin >> zipCode; cin.ignore();
}


void Address::print() {
	cout << "Address : " << buildingNumber << " " << streetName << " " << cityName << " " << stateName << " " << zipCode << endl;
}
