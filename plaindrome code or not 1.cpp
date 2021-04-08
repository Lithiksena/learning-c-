#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int aa;
	int pn;
	int rem=0;
	cout<<" enter a number to check if its a plindorme or not: ";
	cin>>n;
	cout<<" press 1 for any thing other than a mutiple of 10 and two for a mutiple of  10 : ";
	cin>>aa;
	pn=n;
	
	switch(aa)
	{
	    case 1:
		while(n>0)  
		{
			rem=rem*10;
			rem=rem+n%10;
			n=n/10;
		}
		cout<<"the reversed number : "<<rem<<endl;
		break;

		case 2:
		while(n>0)  
		{
			rem=rem*10;
			rem=rem+n%10;
			n=n/10;
			cout<<rem;
		}
		break;
		default:
			cout<<"its not a number or you enter something wrong";
		
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
