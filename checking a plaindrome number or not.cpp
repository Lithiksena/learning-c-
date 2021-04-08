#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int pn;
	int rem=0;
	cin>>n;
	pn=n;
	
	while(n>0)     // n>0 and n in the while loop means the same thing ,
	               // the code excutes until n>0 for for the conditions ;
	              // n is a shorthand form for writing n>0
	{
		rem=rem*10;
		rem=rem+n%10;
		n=n/10;
		cout<<rem<<endl;
	}
	
	
	if(rem==pn)
	{
		cout<<" Its a palindrome number";
	}
	else
	{
		cout<<"Its not a palindrome number";
	}
}
