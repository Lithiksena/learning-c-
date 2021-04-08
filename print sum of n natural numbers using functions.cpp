//wap to print sum of n natural numbers using functions
#include<bits/stdc++.h>
using namespace std;
void natural(int n)
{
	int sum=0;
	int i=1;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
		cout<<sum;
}
int main()
{
	int n;
	cin>>n;
	natural(n);
}
