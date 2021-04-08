#include<iostream>
using namespace std;
int main ()
{
	int a;
	int reverse = 0;
	cout<<"enter a number to reverse : ";
	cin>>a;
	
	
     	while(a)
	    {
	    	reverse*=10;                     // a= 12,0*10=0 + 12%10 = 2+0=2 aand 1
	    	reverse = reverse + a%10;       // 12= 12/10= 1 
	    	a/=10;
     	}
    cout<<"reversed number: "<<reverse;
	return 0;
}
