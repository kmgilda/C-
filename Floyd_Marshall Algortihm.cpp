#include<iostream>
using namespace std;

	void floydAlgorithm(int a[][5], int n, int p[][5])
	{
		for (int k = 0; k < n; k++)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (a[i][j] > (a[i][k] + a[k][j]))
					{
						a[i][j] = a[i][k] + a[k][j];
						p[i][j] = k;           					
					}             				
				}       			
			}		
		}                 
	}

	void path(int q, int r, int p[][5], int a[][5])
	{
		if (a[q][r] < 3453453)
		{	
		
		if (p[q][r] != 0)
		{
			path(q,p[q][r], p,a);
			cout << "Vertex: " << p[q][r] << endl;
			path(p[q][r], r, p,a); 		
			return;
		}
		else return;
		}
		else return;
	
	} 






int main()
{

	int a[5][5] = {{0,1,3453453,1,5},{9,0,3,2,3453453},{3453453,3453453,0,4,3453453},{3453453,3453453,2,0,3},{3,3453453,3453453,3453453,0}};
	int p[5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			p[i][j] = 0;
	}

	floydAlgorithm(a,5,p);

		
	/*for (int k = 0; k < 3; k++)
		{
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					if (a[i][j] > (a[i][k] + a[k][j]))
					{
						a[i][j] = a[i][k] + a[k][j];
						p[i][j] = k;           					
					}             				
				}       			
			}		
		} */ 
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			cout << " | " << a[i][j] << " | "; 
	cout << endl;
	}            
	
	int x, y;
	cin >> x >> y;
	path(x,y,p,a);
	

return 0;
}
