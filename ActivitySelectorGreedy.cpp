#include<iostream>
using namespace std;


	

	int GreedyActivitySelector(int s[], int f[], int n, int a[])
	{
		a[0] = 1;
		int flag = 1;		
		int k = 0;
		for (int m = 1; m < n; m++)  
			{
				if (s[m] >= f[k])
				{
					a[flag++] = m + 1;
					k = m;
				}
			}
		return flag;
	}


int main()
{
	/*int a[10] = {10,100,0,3,45,23,87,34,56,10};
	buildheap(a,10);
	int i = 0;
	while (i < 10)
	{
		cout <<	a[i++] << " ";
	}
	cout << endl; */

	int startTime[11] = {1,3,0,5,3,5,6,8,8,2,12};
	int finishTime[11] = {4,5,6,7,8,9,10,11,12,13,14};
	int size = sizeof(startTime) / sizeof(startTime[0]);		
	int a[size];	
	int n = GreedyActivitySelector(startTime, finishTime, 11,a);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;



	return 0;
}
