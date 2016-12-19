#include<iostream>
using namespace std;
int main() {
int n, t , i, o = 0;
cin >> n; //Input number to be reversed.
for (i = n, t = 1; i > 0; i /= 10) {
t *= 10;
}
t /= 10;
for (i = n ; i > 0; i /= 10, t /= 10) {
o += (t * (i % 10));
}
cout << o << endl;
return 0;
}
