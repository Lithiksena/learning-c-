//wap to return wheather the passed value is a alphabet using functions 
#include<bits/stdc++.h>
using namespace std;
char wkjnd(char n)
{ 
	if(n>='A' && n<='Z')
	{
		return n;	
	}
	else
	{
		return 0;
	}
}
int main()
{
	char n;
	cin>>n;
    cout<<wkjnd(n);
}
