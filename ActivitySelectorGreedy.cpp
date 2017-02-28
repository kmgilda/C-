#include<iostream>
using namespace std;

	void minheapify(int a[], int r, int size)
	{
		int left = (2 * r) + 1;
		int right = (2 * r) + 2;
		int smallest;
		if ((left < size) && (a[left] < a[r]))
		{	smallest = left; }
		else 
		{	smallest = r; }
		if ((right < size) && (a[right] < a[smallest]))
		{	smallest = right; }
		if (smallest != r)
			{
				int tmp = a[smallest];
				a[smallest] = a[r];
				a[r] = tmp;
				minheapify(a,smallest,size);				
			}
			
	}

	void buildheap(int a[], int size)
	{
		int i = (size / 2);		
		for (; i >= 0; i--)
			{
				minheapify(a,i,size);
			}

	}

	int flag = 0;
	

	int GreedyActivitySelector(int s[], int f[], int n, int a[])
	{
		a[0] = 1;
		flag = 1;		
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
