
//logial OR

#include <iostream>
using namespace std;
int main ()
{
	int a;
	int b;
	cin>>a>>b;
	
	if(a>78 || b<32 )
	{
		cout<<"one or both are correct";
	}
	else
	{
		cout<<" none of them are correct";
	}
	return 0;
}
