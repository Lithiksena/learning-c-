#include <iostream>
using namespace std;
int main() 
{
    int a;
    int ot1;
    int ot2;
    int ot3;
    int ct1;
    int ct2,ct3,ct4;
    cin>>a>>ot1>>ot2>>ot3>>ct1>>ct2>>ct3>>ct4;

    int ot =ot1+ (a-ot2) *ot3;
    int ct=ct3+(a/ct1)*ct2+a*ct4;

    if(ot<ct || ot == ct )
    {
    	cout<< "Online Taxi ";
	}
    
     else (ct <ot);
	{
		cout<< "Classic Taxi";
	}
    return 0;
}

