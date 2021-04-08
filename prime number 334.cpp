#include<bits/stdc++.h>
using namespace std;
int main()
{
	int low;
	int high;
	cout<<"the low number : ";
	cin>>low;
	cout<<"the high number : ";
	cin>>high;
	int j;
	int n;
	int i;
	int m;
	
	for(j=low;j<=high;j++)
	{
	   int flag=0;
	for(i=2;i<j/2;++i)
	{
		if(i%j==0)   // i is modded by j
		{
			cout<<"not a prime number"<<endl;
			flag=1;
			break;
		}
		else
		{
			flag=0;
		}
	}
	if (flag==0)
	{
		cout<<"prime number: "<<low;
	}
	
	}
	return 0;
}
