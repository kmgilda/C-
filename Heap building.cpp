#include<iostream>
using namespace std;

	void maxheapify(int a[], int r, int size, int tracker[])
	{
		int left = (2 * r) + 1;
		int right = (2 * r) + 2;
		int largest;
		if ((left < size) && (a[left] > a[r]))
		{	largest = left; }
		else 
		{	largest = r; }
		if ((right < size) && (a[right] > a[largest]))
		{	largest = right; }
		if (largest != r)
			{
				int tmp = a[largest];								
				a[largest] = a[r];
				a[r] = tmp;					
				maxheapify(a,largest,size,tracker);				
			}	
	}

	void buildheap(int a[], int size)
	{
		int i = (size / 2);		
		while (i >= 0)
			{
				maxheapify(a,i,size);
				i--;
			}
		
	maxheapify(a,0,size);	
	}


int main()
{

	int a[10] = {25,100,3,350,5,6,7,8,9,10};
	//int a[10] = {7,10,3,9,5,3,1,8,4,2};
	//maxheapify(a,0,10);

	buildheap(a,10);

	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;


return 0;
}
