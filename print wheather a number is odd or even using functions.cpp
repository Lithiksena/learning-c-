//wap to print wheather a number is odd or even using functions 
#include<bits/stdc++.h>
using namespace std;
void eo(int n)
{
	if(n%2==0)
	{
		cout<<"even";
	}
	else
	{
		cout<<"odd";
	}
}
int main()
{
	int n;
	cin>>n;
 	eo(n);
}
