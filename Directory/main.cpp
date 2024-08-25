#include<iostream>
#include<fstream>
#include"Directory.h"
using namespace std;

void PrintSr(int p, int o) {
	ifstream in("Directory.txt"); 
	char string3[30] = {};
	if (in.is_open()) { 
		int e1 = 0;
		while (!in.eof()) { 
			in >> string3;
			e1++;
			if (o ==1) {
				if (e1 > (p - 1) && e1 < (p + 6)) {
					cout << string3 << "  ";
				}
			}
			if (o == 2) {
				if (e1 > (p - 2) && e1 < (p + 5)) {
					cout << string3 << "  ";
				}
			}
			if (o == 3) {
				if (e1 > (p - 3) && e1 < (p + 4)) {
					cout << string3 << "  ";
				}
			}
			if (o == 4) {
				if (e1 > (p - 6) && e1 < (p + 1)) {
					cout << string3 << "  ";
				}
			}
		}

		in.close();
		cout << endl; 
	}
	else {
		cout << "Could not open the file";
	}


}

int main() {
	ofstream out("Directory.txt");
	if (out.is_open()) {
		out << "company name" << "     " << "owner" << "      " << "phone" << "       " << "address" << "        " << "type activity" << endl;
		out.close();
	}
	else {
		cout << "Could not open the file";
	}
	Directory a("OLT", "USA;", "23456789", "Cidney 34 ", "seyl");
	Directory e("samsung", "rjhtz", "12334589", "vjbn  798 ", "dfghn");
	Directory r("FGH", "UK", "23789", "sdfv  798", "df");
	a.Printb();
	a.Print();
	e.Print();
	r.Print();

	int s = 0;
	int d = 0;
	int k = 0;

	char string1[30] = {};
	char string2[30] = {};

	cout << "Perform a search:" << endl << "company name -> 1" << endl << "owner -> 2" << endl << "phone -> 3" << endl << "type activity -> 4" << endl;
	cout << "What to search by:" << endl;
	cin >> s;
	cin >> string1;
	int l = strlen(string1);
	ifstream in("Directory.txt");

	if (in.is_open()) {
		int e = 0;
		while (!in.eof()) {
			in >> string2;
			d++;
			for (int i = 0; i < l; i++) {
				if (string1[i] == string2[i]) {
					e++;
					if (e == l) {
						k = d;
						PrintSr(k, s);
					}
				}
			}
			e = 0;
		}

		in.close(); 
	}
	else {
		cout << "Could not open the file";
	}
}
