//wap to print plaindrome numbers using functions 
#include<bits/stdc++.h>
using namespace std;
void palindrome(int n)
{
	int i=0;
	int rev=0;
	int n1;
	n1=n;
	while(n>0)
	{
		rev=n%10;
		i=i*10+rev;
		n=n/10;
	}
	if(i==n1)
	{
		cout<<n1<< ":  palindrome ";
	}
	else
	{
		cout<<n1<<":  not palindrome ";
	}
}
int main()
{
	int n;
	cin>>n;
	palindrome(n);
}
