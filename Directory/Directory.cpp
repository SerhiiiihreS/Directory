#include "Directory.h"
#include<iostream>
#include<fstream>

using namespace std;

Directory::Directory(const char* comnam)
{
	this->companyname = new char[strlen(comnam) + 1];
	strcpy_s(this->companyname, strlen(comnam) + 1, comnam);
}

Directory::Directory(const char* comnam, const char* own):Directory(comnam)
{
	this->owner = new char[strlen(own) + 1];
	strcpy_s(this->owner, strlen(own) + 1, own);
}

Directory::Directory(const char* comnam, const char* own, const char* phn):Directory(comnam,own)
{
	this->phone = new char[strlen(phn) + 1];
	strcpy_s(this->phone, strlen(phn) + 1, phn);
}

Directory::Directory(const char* comnam, const char* own, const char* phn, const char* adsr) :Directory(comnam,own,phn)
{
	this->address = new char[strlen(adsr) + 1];
	strcpy_s(this->address, strlen(adsr) + 1, adsr);
}

Directory::Directory(const char* comnam, const char* own, const char* phn, const char* adsr, const char* tpact) :Directory(comnam,own,phn,adsr)
{
	this->typeactivity = new char[strlen(tpact) + 1];
	strcpy_s(this->typeactivity, strlen(tpact) + 1, tpact);

	ofstream out("Directory.txt", ios::app);
	if (out.is_open()) {
	 	out << " |      " << companyname << "      |      " << owner << "      |      " << phone << "      |      " << address << "      |      " << typeactivity << "      |" << endl;
		out << "----------------------------------------------------------------------------------------------------------------------------------";
		out.close(); 
	}
	else {
		cout << "Could not open the file"; 
	}
}

Directory::~Directory()
{
	delete[]companyname;
	delete[]owner;
	delete[]phone;
	delete[]address;
	delete[]typeactivity;
}

Directory::Directory(const Directory& b)
{
	this->companyname = new char[strlen(b.companyname) + 1];
	strcpy_s(this->companyname, strlen(b.companyname) + 1, b.companyname);

	this->owner = new char[strlen(b.owner) + 1];
	strcpy_s(this->owner, strlen(b.owner) + 1, b.owner);

	this->phone = new char[strlen(b.phone) + 1];
	strcpy_s(this->phone, strlen(b.phone) + 1, b.phone);

	this->address = new char[strlen(b.address) + 1];
	strcpy_s(this->address, strlen(b.address) + 1, b.address);

	this->typeactivity = new char[strlen(b.typeactivity) + 1];
	strcpy_s(this->typeactivity, strlen(b.typeactivity) + 1, b.typeactivity);

}
void Directory::Setcompanyname(const char* comnam)
{
	if (this->companyname != nullptr) {
		delete[]companyname;
	}
	this->companyname = new char[strlen(comnam) + 1];
	strcpy_s(this->companyname, strlen(comnam) + 1, comnam);
}

void Directory::Setowner(const char* own)
{
	if (this->owner != nullptr) {
		delete[]owner;
	}
	this->owner = new char[strlen(own) + 1];
	strcpy_s(this->owner, strlen(own) + 1, own);
}

void Directory::Setphone(const char* phn)
{
	if (this->phone != nullptr) {
		delete[]phone;
	}
	this->phone = new char[strlen(phn) + 1];
	strcpy_s(this->phone, strlen(phn) + 1, phn);
}

void Directory::Setaddress(const char* adsr)
{
	if (this->address != nullptr) {
		delete[]address;
	}
	this->address = new char[strlen(adsr) + 1];
	strcpy_s(this->address, strlen(adsr) + 1, adsr);
}

void Directory::Settypeactivity(const char* tpact)
{
	if (this->typeactivity != nullptr) {
		delete[]typeactivity;
	}
	this->typeactivity = new char[strlen(tpact) + 1];
	strcpy_s(this->typeactivity, strlen(tpact) + 1, tpact); 
}

void Directory::Printb()
{
	cout << " |    " << "company name" << "      |    " << "owner" << "      |    " << "phone" << "      |    " << "address" << "      |    " << "type activity" << "      |" << endl; 
	cout << "----------------------------------------------------------------------------------------------------" << endl; 
}

void Directory::Print()
{
	cout << " |      " << companyname << "      |      " << owner << "      |      " << phone << "      |      " << address << "      |      " << typeactivity << "      |" << endl; 
	cout<< "------------------------------------------------------------------------------------------------------"<<endl;  
} 






const char* Directory::Getcompanyname() const
{
	return companyname;
}

const char* Directory::Getowner() const
{
	return owner;
}

const char* Directory::Getphone() const
{
	return phone;
}

const char* Directory::Getaddress() const
{
	return address;
}

const char* Directory::Gettypeactivity() const
{
	return typeactivity;
}



