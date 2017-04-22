#include<iostream>
using namespace std;
	struct node {
		int data;
		int weight;		
		struct node *next;
	};

	

	void BuildAdjacencyList(struct node *a[], int n)
	{

		for (int i = 0; i < n; i++) {
			int m;			
			cout << "Enter the number of adjacent vertices for vertice " << i << endl;
			cin >> m;
			cout << "Enter the corresponding adjacent vertices for vertice " << i << endl;		
			struct node *dummy; 
			
			for (int z = 0; z < m; z++) {
				struct node *tmp = new node;
				//printf("a");
				

				if (z == 0)				
					a[i] = tmp;
				else
					dummy->next = tmp;				
				int x;				
				cin >> x;	 	
				tmp->data = x;
				dummy = tmp;
			}
			dummy->next = 0;

		} 
	}

	void displayAdjacencyList(struct node *a[], int n)
	{
		
		cout << "Adjacency List: " << endl;		
		for (int i = 0; i < n; i++) {
			struct node *tmp = a[i];
			while (tmp->next != 0)
			{
				cout << tmp->data << " ";
				tmp = tmp->next;
			}
				cout << tmp->data << endl;
		}
	
	}






int main()
{
	struct node *a[8];
	BuildAdjacencyList(a,8);
	displayAdjacencyList(a,8);	







return 0;
}
