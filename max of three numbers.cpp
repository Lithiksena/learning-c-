#include<bits/stdc++.h>
using namespace std;
void m(int a,int b,int c)
{
	if(a>b&&b>c)
	{
		a=a/c;
		cout<<a;
	}
	if(a<b && b<c)
	{
		c=c/a;
		cout<<c;
	}
	if(a<b && b>c)
	{
		if(a>c)
		{
			b=b/a;
			cout<<b;
		}
		if(a<c)
		{
		b=b/c;
		cout<<b;
		}
	}
	if(a>b && b<c)
	{
		if(a>c)
		{
		    a=a/b;
		    cout<<a;
		}
		if(a<c)
		{
			c=c/b;
			cout<<c;
		}
	}
}
int main ()
{
	int a;
	int b;
	int c; 
	cin>>a>>b>>c;
	m(a,b,c);
}
