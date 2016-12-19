#include<iostream>
using namespace std;

class Date {


	int m_year;
	int m_month;
	int m_day;

public:
	void setDate(int year, int month, int day)
	{
		m_year = year;
		m_month= month;
		m_day = day;
	}

	Date(int year, int month, int day)
	{
		setDate(year,month,day);
	}

	int getYear() { return m_year; }
	int getMonth() {return m_month; }
	int getDay() { return m_day; }	
		
};

class newDate : public Date {
public:
	newDate(int year, int month, int day) : Date(year,month,day)
	{
			
	}
};

int main()
{
Date d(1998,01,30);
cout << d.getYear() << endl;
newDate d1(1998,02,30);
cout << d1.getDay() << endl;
return 0;
}
