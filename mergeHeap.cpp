#include<iostream>
using namespace std;

void minheapify(int a[], int r, int size, int b[])
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
				int tmp1 = b[smallest];				
				a[smallest] = a[r];
				b[smallest] = b[r];				
				a[r] = tmp;
				b[r] = tmp1;				
				minheapify(a,smallest,size, b);				
			}
			
	}

	void buildheap(int a[], int size, int b[])
	{
		int i = (size / 2);		
		for (; i >= 0; i--)
			{
				minheapify(a,i,size, b);
			}
		
	}

int main()
{
	int k = 5;
	int heap[k];	
	int a[5] = {100,120,155,170,176};
	int b[5] = {2,3,8,9,10};
	int c[5] = {2,7,8,12,16};
	int d[5] = {3,9,20,25,50};
	int e[5] = {6,12,13,14,37};
	int *aux[5] = {a,b,c,d,e}; 	
	
	for (int i = 0; i < k; i++)
	{
		heap[i] = *aux[i];
	}	


	/*for (int i = 0; i < k; i++)
	{
		cout << heap[i] << " ";
	}
	cout << endl; */

	int finalSort[25];
	int fs = 0;
	while (fs < 25)
	{
		finalSort[fs++] = 0;

	}		

	// merging code starts :
	fs = 0;
	while (fs < 25)
	{
		buildheap(heap,5,*aux);
		finalSort[fs] = heap[0];
		(aux[0])++;
		heap[0] = *aux[0];	
		minheapify(heap,0,5,*aux);
		fs++;
	}	
	fs = 0;
	while (fs < 25)
	{
		cout << finalSort[fs++] << " " ;
	}
	cout << endl;

return 0;
}









