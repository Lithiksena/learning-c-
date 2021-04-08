#include<bits/stdc++.h>
using namespace std;
void prime(int n)
{
	int i;
	int flag;
	for(i=2;i<n;i++)
	{
		flag=0;
		if(n%i==0)
		{
			flag=1;
			break;
		}
		else
		{
			flag=0;
		}
	}
	if(flag==0)
	{
		cout<<n<<" is a prime number";
	}
	else
	{
		cout<<n<<" is not a prime number";
	}
}
int main()
{
	int n;
	cin>>n;
	prime(n);
}
