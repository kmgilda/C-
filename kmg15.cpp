#include<iostream>
using namespace std;

class baseClass {

	int size, k;

public:


	void array(int s,int d) {
		size = s;
			
		int a[size];
		int i;								
		for (i = 0; i < size; i++)
		{
			a[i] = -1;
		}
	
				
		int flag = -1;
		int m = size;
		i = size;		
		while (flag < size)
		{
			k = d;
			while (k > 0)
			{		
				if (i < 0)
					i = size;				
				if (a[i-1] == -1)
				{
					i--;
					k--;				
				}
			}
			
			a[i] = m;
			m--;			
			flag++;
		}		
		
		for (i = 0; i < size; i++)
		{
			cout << a[i] << " ";
		}



	}



};

int main()
{
		
	baseClass b1;
	b1.array(10,3);	



	return 0;
}
