#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q;//1
	int w;//2
	int e;//3
	int r;//4
	int t;//5
	int z;//6
	
	
	
	
	
	
	
	
    long long int n; 
    cin>>n;
    int a=1;
    int r=0;
    long long int b;
    long int i;
    b=n;
    while(n!=0)
    {
        n=n/10;
        i++;
    }
    cout<<i;
    cout<<endl;
    while(a<=i)
     {
     	r=b%10;
     	b=b/10;
     	cout<<r<<"  ";
    	if(a==1)
    	{
    		q=r;
		}
		if(a==2)
    	{
    		w=r;	
		}
     	a++;
	 }
}
we are extracing the value froma number 


/*
1st interation
op=1
n=42613
od=42613 %10=3
id=1
ip=3
inv=1* pow(10,2)=100
4261
