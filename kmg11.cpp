#include<iostream>
using namespace std;

int findfirstindex(int a[], int l, int h, int x)
{
int mid = (l + h) / 2;
if (a[mid] == x && a[mid - 1] != x)
	return mid;
else if (a[mid] >= x)
	return findfirstindex(a,l,mid - 1,x);
else
	return findfirstindex(a,mid + 1,h, x);
}



int findlastindex(int a[], int l, int h, int x)
{
int mid = (l + h) / 2;
if (a[mid] == x && a[mid + 1] != x)
	return mid;
else if (a[mid] <= x)
	return findlastindex(a,mid + 1,h, x);
else
	return findlastindex(a,l,mid - 1,x);
}

int findnumberofrepititions(int a[], int l, int h, int x) {
int fi = findfirstindex(a,l,h,x);
int li = findlastindex(a,l,h,x);
	return (li - fi) + 1 ;
} 


int main()
{
int a[10] = {1,3,3,4,4,4,4,5,6,7};
int n;
cin >> n;
int firstindex = findfirstindex(a,0,9,n);
	cout << firstindex << endl;
int lastindex = findlastindex(a,0,9,n);
	cout << lastindex << endl;
int repititions = findnumberofrepititions(a,0,9,n);
	cout << repititions << endl;

return 0;
}
