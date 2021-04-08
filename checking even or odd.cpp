#include<iostream>
using namespace std;
int main ()
{
	int a; //to find a max  among three numbers
	int b;
	int c;
	cin>>a>>b>>c;
	if(a>b && b>c)
	{
		cout<<a;
	}
	if(a<b && b<c)
	{
		cout<<c;
	}
	if(a<b&& b>c)
	{
		cout<<b;
	}
	if(a>b && b<c)
	{
		if(a>c)
		{
		    cout<<a;
		}
		if(a<c)
		{
			cout<<b;
		}
	}
	return 0;
}
