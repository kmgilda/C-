#include<iostream>
using namespace std;
int main() {
int n, i, t = 1, o = 0;
cin >> n; // Number to be converted to its binary equivalent
for (i = n; i > 0; i /= 2) {
o += (t * (i % 2));
t *= 10;
}
cout << o << endl;
return 0;
}
