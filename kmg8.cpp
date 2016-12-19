#include<iostream>
using namespace std;
int m = 5;
int main()
{
cout << m << endl;
int *p;
int m = 10;
int& a = m;
cout << m << endl;
{
int m = 15;
cout << m << endl;
{
int m = 25;
p = &m;
cout << m << endl;
cout << a << endl;
}
cout << m << endl;
}
cout << *p << endl;
return 0;
}
