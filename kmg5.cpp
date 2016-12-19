#include<iostream>
using namespace std;
int main() {
int a, b, c;
cin >> a;
cin >> b;
cin >> c; // a, b & c are the input numbers.
if (a > b) {
if (b > c) cout << c << " " << b << " " << a;
else 
{
if (a > c) cout << b << " " << c << " " << a;
else cout << b << " " << a << " " << c;
}
}
else {
if (a > c)
cout << c << " " << a << " " << b;
else
{if (b > c)
cout << a << " " << c << " " << b;
else
cout << a << " " << b << " " << c;
}
}
return 0;
}
