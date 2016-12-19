#include<iostream>
using namespace std;
int addNumbers(int a, int b) {
return a + b;
}
int main()
{
int a, b, c;
cin >> a;
cin >> b;
c = addNumbers(a,b);
cout << c << endl;
return 0;
}
