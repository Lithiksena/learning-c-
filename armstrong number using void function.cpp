#include<bits/stdc++.h>
using namespace std;
void arm(int n)
{
	int m;
	int rem=0;
	m=n;
	int sum=0;
	while(n)
	{
		rem=n%10;
		sum=sum+pow(rem,3);
		n=n/10;
	
	}
	cout<<sum;
	if(m==sum)
	{
		cout<<"armstrong number";
	}
	else
	{
		cout<<"not an armstrong number";
	}
}
int main()
{
	int n;
	cin>>n;
	arm(n);
}
