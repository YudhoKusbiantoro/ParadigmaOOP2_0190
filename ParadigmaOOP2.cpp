// Repo :ParaidgmaOOP2_4nimbelakang
// commit : minimal : 15

#include <iostream>
using namespace std;

class seseorang
{
public:
	// pure virtual function
	virtual void pesan() = 0;

	//virtual function biasa
	//virtual void pesan ()
	// {
	//cout << "Pesan dari seseorang" << endl;
	// }
};

class joko : public seseorang
{
public:
	//deklarasi
	void pesan()
	{
		//implementasi
		cout << "Pesan dari Joko" << endl;
	}
};

class lia : public seseorang
{
public:
	void pesan()
	{
		cout << "Pesan dari Lia" << endl;
	}
};

