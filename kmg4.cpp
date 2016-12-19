#include<iostream>
using namespace std;
int main()
{
int a , b;
cin >> a;
cin >> b; // The number being checked for multiplicity against a
if (b % a) cout << "The number is not a multiple." << endl;
else cout << "The number is a multiple." << endl;
return 0;
}
