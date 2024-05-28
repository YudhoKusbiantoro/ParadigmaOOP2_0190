#include <iostream>
using namespace std;

class remotelampu
{
private:
	string saklarNo[10];

public:
	void setsaklarNo(int i, string value)//untuk mengisi nilai saklar
	{
		saklarNo[i] = value;
	}
	string getsaklarNo(int i)//mendapatkan nilai saklar
	{
		return saklarNo[i];
	}
};
