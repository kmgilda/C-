#include<iostream>
using namespace std;

class fac20 {
public:
long long l;
int a[160];
void factorial20(int n) {
    l = 1;
    while (n > 0)
    { 
        l *= n;
        n--;
    }
}

void display() {
    cout << l << endl;
}

void factorial100() {
    
    
    
    int m = 0;    
    while (m <=159)
    {
    a[m] = 0;
    m++;
    
    }
    
    int i = 0;
    while (l > 0) {
        a[i] = l % 10;
        l /= 10;   
        i++;   
    }                             
    m = i;
    
    int carry;
    for (int z = 21; z <= 100; z++)
    { 
        
        for (i = 0, carry = 0; i < m; ++i) {                
            a[i] = (a[i] * z) + carry;
            carry = a[i] / 10;
		a[i] = a[i] % 10;					        
	}    
	
	while (carry > 0)
	{
		a[i++] = carry % 10;
		carry /= 10;

	}     
	


	m = i;
	}		
    
    while (i >= 0) {   
        cout << a[i];
        i--;   
    }
			    
    

}

};

/*class fac100: public fac20 {
    int a[160];
    
public:
    
 

    
    

}; */







int main()
{
    fac20 f1;
    f1.factorial20(20);
    f1.display();
    f1.factorial100();
 /*   fac100 f2;
    f2.factorial100();
*/



}
