#include<stdio.h>

//Premptive Priority Scheduling algorithm with higher priority number meaning higher priority

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
				int tmp1 = tracker[largest];
				tracker[largest] = tracker[r];								
				a[largest] = a[r];
				a[r] = tmp;
				tracker[r] = tmp1;			
				printf("Heapify Success \n");			
				maxheapify(a,largest,size,tracker);				
			}	
	}

	/*void buildheap(int a[], int size)
	{
		int i = (size / 2);		
		while (i >= 0)
			{
				maxheapify(a,i,size);
				i--;
			}
		
	maxheapify(a,0,size);	
	} */


	struct process {
		int at;
		int bt;
		int btf;
		int ct;
		int tt;
		int wt;
		int priority;

	};

	


	void premptivePriority(struct process p[], int n) {
		
		int control = n;
		int i = 0, m = 0;
		int time = 0;
		int heap[n];
		int tracker[n];
		/*for (int z = 0; z < n; z++)
			tracker[z] = z; */ 
		int dum, root = 1, size = 1;	
		

		while (control > 0)
		{
			if (p[i].at == time)
			{
				heap[m] = p[i].priority;
				tracker[m] = i;		
				maxheapify(heap,0,size++,tracker);
				dum = tracker[0];
				//printf("%d \n", dum);	
				m++;
				i++;
				//printf("First \n");			
			}	 
			
			time++;				
			p[dum].bt--;
			
			if (p[dum].bt == 0)
			{
				p[dum].ct = time;
				size--; 					
				maxheapify(heap,root,size,tracker);				
				dum = tracker[root];
				//printf("Second \n");				
				control--;
				root++;			
			}		
			
		}		

		
		for (int y = 0; y < n; y++)
		{
			p[y].tt = p[y].ct - p[y].at;
			p[y].wt = p[y].tt - p[y].btf;
					
		
		}

	}	

	void displayData(struct process p[], int n)
	{
		int ttt, wtt;
		for (int i = 0; i < n; i++)
		{		
			printf("Arrival Time: %d Burst Time: %d Priority: %d Completion Time: %d TurnAround Time: %d Waiting Time: %d \n", p[i].at, p[i].btf, p[i].priority,p[i].ct, p[i].tt, p[i].wt);
			ttt += p[i].tt;
			wtt += p[i].wt;		
		}
		printf("Average Waiting Time %d", wtt / n);
		printf("Average Turnaround Time %d", ttt / n);		

	
	}







int main() {

	struct process p[3];
	p[0].at = 0;
	p[0].bt = 10;
	p[0].btf = 10;	
	p[0].priority = 2;
	p[1].at = 2;
	p[1].bt = 5;
	p[1].btf = 5;	
	p[1].priority = 3;
	p[2].at = 3;
	p[2].bt = 7;
	p[2].btf = 7;	
	p[2].priority = 1;
	premptivePriority(p,3);
	displayData(p,3);
	
	




return 0;
}
