#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
		
	/*ofstream outf("sample.dat", ios::app);
	outf << "Hello line 3" << endl;
	outf << "line 4? " << endl;
	outf.close(); */

	

	ifstream inf("sample.dat");
	while(inf) 
	{	
		string dummy;
		getline(inf,dummy);
		cout << dummy << endl;

	}
	
	
	inf.seekg(0);	
	while(inf)
	{
		string dummy;
		inf >> dummy;
		cout << dummy << endl;
	} 
	inf.close();

return 0;
}
