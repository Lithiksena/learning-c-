//check if the trianlgle is scalene , equalatral or isosceles
#include<iostream>
using namespace std;
int main ()
{
	int a;
	int b;
	int c;
	cin>>a>>b>>c;
	if(a==b && c==a)
	{
		cout<<"equalatral triangle"<<endl;
    }
     else if (a==b && b!=c || a!=c )
    {
    	cout<<"isosceles triangle"<<endl;
    }
     else if (a!=b && b!=c && c!=a)
    {
    	cout<<"scalene triangle"<<endl;
    }
    return 0;
}
