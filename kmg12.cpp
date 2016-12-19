#include<iostream>
using namespace std;

class time1 {

int hours, mins;

public:

	void getTime()
	{
		cout << "Enter the time in hours and minutes respectively." << endl;
		cin >> hours >> mins;
	}
	
	void showTime()
	{
		cout << hours << ":" << mins << endl;
	}

	void addTime(time1 a, time1 b)
	{
		hours = a.hours + b.hours;
		mins = a.mins + b.mins;
			if (mins >= 60)
			{
				hours += (mins / 60);
				mins -= 60;
			}
	}

	time1(int h = 0, int m = 0)
	{
		hours = h;
		mins = m;
	}

	~time1()
	{
		cout << hours << ":" << mins << endl;

	}

};


int main()
{
time1 a,b(1,30),c;
a.getTime();
a.showTime();
time1 d = a;
time1 e;
e = a;
c.addTime(a,b);
c.showTime();
return 0;
}
