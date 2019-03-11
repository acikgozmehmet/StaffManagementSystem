#ifndef ADDRESS_H
#define ADDRESS_H

#include<iostream>
#include<string>

using namespace std;
class Address {
public:
	Address();
	Address(int bN, string sN, string cN, string stN, int zC);
	Address(const Address& other);
	~Address();


	void setBuildingNumber(int bN);
	void setStreetName(string sN) ;
	void setCityName(string cN) ;
	void setStateName(string stN) ;
	void setZipCode(int zC) ;


	int getBuildingNumber() const;
	string getStreetName() const;
	string getCityName() const;
	string getStateName() const;
	int getZipCode() const;

	void input(void);
	void print(void);

private:
	int buildingNumber;
	string streetName;
	string cityName;
	string stateName;
	int zipCode;
};
#endif
