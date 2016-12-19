#include<iostream>
using namespace std;

class base {
int dummy;
int d5;
public:

	base()
	{
		cout << "We are in base constructor" << endl;

	}



};

class derived: virtual public base {

int d2;
public:

	derived()
	{
		base();		
		cout << "We are in derived constructor" << endl;
	}
	


};

class deri: virtual public base {

int d1;


};

class diamond: public deri, public derived {


};


int main()
{

	cout << sizeof(diamond) << endl;
	//base b1;
	derived d1;


return 0;
}
