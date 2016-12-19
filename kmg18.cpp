#include<iostream>
#include<string>
using namespace std;
int main()
{
string dummy = "Hello man!";
cout << dummy.find('o') << endl;
dummy.replace(6,3,"girl");
cout << dummy << endl;
dummy.erase(6,4);
cout << dummy << endl;
dummy.insert(6,"Shailesh");
cout << dummy << endl;
dummy.append(" Mohata");
cout << dummy << endl;
cout << dummy.at(4) << endl;
string dum1 = " lavdu";
dum1.swap(dummy);
cout << dummy + dum1 << endl;
cout << dum1.length() << endl;

cout << dum1 << endl;
return 0;
}
