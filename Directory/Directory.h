#pragma once
class Directory
{
	char* companyname = nullptr;
	char* owner = nullptr;
	char* phone = nullptr;
	char* address = nullptr;
	char* typeactivity = nullptr;
public:
	Directory() = default;
	Directory(const char* comnam);
	Directory(const char* comnam, const char* own);
	Directory(const char* comnam, const char* own, const char* phn);
	Directory(const char* comnam, const char* own, const char* phn, const char* adsr);
	Directory(const char* comnam, const char* own, const char* phn, const char* adsr, const char* tpact);

	~Directory();

	Directory(const Directory& b);

	void Setcompanyname(const char* comnam);
	void Setowner(const char* own);
	void Setphone(const char* phn);
	void Setaddress(const char* adsr);
	void Settypeactivity(const char* tpact);

	const char* Getcompanyname()const;
	const char* Getowner()const;
	const char* Getphone()const;
	const char* Getaddress()const;
	const char* Gettypeactivity()const;

	void filecreation();

	
};
