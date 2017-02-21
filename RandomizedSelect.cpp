#include<iostream>
#include<cstdlib>

int counter = 0;




using namespace std;

	int	RandomizedPartition(int a[], int start, int end)
	{
		srand (time(NULL));		
		int pivotIndex = start + rand() % (end - start + 1);		
		//cout << pivotIndex << endl;
		int pivot = a[pivotIndex];
		int last = a[end]; 
		a[end] = pivot;		
		a[pivotIndex] = last;		
		int k = start - 1;
		int i = start;		
		while (i < end)
		{
			if (a[i] <= a[end])
			{
				k++;			
				int tmp = a[k];
				a[k] = a[i];
				a[i] = tmp;
				counter++;						
			}
		i++;
		}
	int tmp = a[end];
	a[end] = a[k + 1];
	a[k + 1] = tmp;
	return k + 1;
	}

	int RandomizedSelect(int a[], int start, int end, int i)
	{
		if (start == end) { 
			return a[start]; 
			 }		
		int q = RandomizedPartition(a,start,end);
		int k = (end - q) + 1;
		if (i == k) 
		{	return a[q];
			 }		
		
		if (i < k)
			return RandomizedSelect(a,q + 1,end, i);
		else
			return RandomizedSelect(a,start,q - 1, i - k);
	}



int main()
{
	//int a[10] = {99,34,56,89,9,1,39,45,67,23};
	
	for (int y = 0; y < 100; y++)
	{ srand (time(NULL));
	int large = rand() % 1000;
	
	int a[1000];
	srand (time(NULL));	
	for (int i = 0; i < 1000; i++)
		{ 	
			a[i] = rand() % 1000;	
		}	
	
	int c =  RandomizedSelect(a,0,1000,large);
	//cout << RandomizedPartition(a,0,9) << endl;
	//cout << endl;
	
	}
	counter /= 100;	
	cout << counter << endl;
		
return 0;
}
