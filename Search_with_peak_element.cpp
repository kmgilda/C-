#include<iostream>
using namespace std;

    int lowerbinarySearch(int a[],int q, int start, int end)
    {
        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (a[mid] == q)
                return mid;
            if (a[mid] > q)
                end = mid - 1;
            if (a[mid] < q)
                start = mid + 1;                      
        
        }
    return -1;
    }
    
    int upperbinarySearch(int a[],int q, int start, int end)
    {
        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (a[mid] == q)
                return mid;
            if (a[mid] > q)
                start = mid + 1;
            if (a[mid] < q)
                end = mid - 1;                     
        }
    return -1;
    }
    
    
    
    
    
    
    
    int findPeak(int a[],int start, int end)
    {
        int mid = (start + end) / 2;
        if ((a[mid] > a[mid + 1]) && (a[mid] > a[mid - 1])) 
            return mid;
        if ((a[mid] < a[mid + 1]) && (a[mid] > a[mid - 1]))
            return findPeak(a,mid + 1,end);
        if ((a[mid] > a[mid + 1]) && (a[mid] < a[mid - 1]))
            return findPeak(a,start, mid - 1);  
    
    
    }



   int search(int a[],int n, int q)
    {
        int start = 0; 
        int end = n - 1;
        int peak = findPeak(a,start, end);
        if (q == a[peak])
            {return peak;}
        int lowerSearch = lowerbinarySearch(a,q,start,peak - 1);     
        int upperSearch = upperbinarySearch(a,q,peak + 1,end);     
        cout << lowerSearch << endl;
        cout << upperSearch << endl;
        if (lowerSearch == -1 && upperSearch != -1)
           { return upperSearch;}
        if (lowerSearch != -1 && upperSearch == -1)
            {return lowerSearch; }        
        if (lowerSearch == -1 && upperSearch == -1)
            {return -1;}
         
     
               
    }  







int main()
{
   int ui = 1;
    do {
    int n[7] = {12,14,27,33,26,15,10};
    int m;
    cout << "Enter number to be searched in array ? " << endl;
    cin >> m;
    int index = search(n,7,m);
    if (index == -1) 
        cout << "Number not found in array. " << endl;
    else
        cout << "NUmber was found in array at index " << index << endl;
    cout << "Enter 1 to search for another number and 0 to exit :" << endl;    
    cin >> ui;
       }
       while (ui != 0);


  
  
return 0;
}
