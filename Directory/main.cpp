#include<iostream>
#include<fstream>
#include"Directory.h"
using namespace std;

int main() {
	ofstream out("Directory.txt"); 
	if (out.is_open()) { 
		out <<  " |      "<<"company name" << "      |      " << "owner" << "      |      " << "phone" << "      |      " << "address" << "      |      " << "type activity" << "      |" << endl;
		out << "----------------------------------------------------------------------------------------------------------------------------------"<<endl; 
		out.close(); 
	} 
	else {
		cout << "Could not open the file";
	}
	Directory a("nbsvf", "kunsfvnk", "23456789", "vjbn 56 798 fgh", "dfghn");
	Directory e("nbsvf", "kufvnk", "234589", "vjbn 56 798 fgh", "dfghn");
	Directory r("nbsvf", "kunsfdfvnk", "23789", "vjbn  798 fgh", "dfghn");
	a.Printb(); 
	a.Print();
	e.Print();
	r.Print(); 



}