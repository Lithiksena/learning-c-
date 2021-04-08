/* WAP to print sum of "n" negative natural numbers
in this program we tell the compiler to give the sum of the negative integers 
till n.
*/
#include<iostream>
using namespace std;
int main ()
{
	int n,i;
	int a=0;
	int sum=0;
	
	cin>>n;
	while(a<n)
	{
		cin>>i;
		if(i<0) //
		{
			sum=sum+i;
			a++; //
		} 
		else
		{
			
		}
	}
	cout<<sum;
	return 0;
}
/*
int n = 2;
int a =0;
int sum =0;
int i = -1;
while (0<2)
-1<0
0 =0+-1 
=-1
0++ = 1
while(1<2)
int i= 2
2<0
(does nothing)
while(1<2)
int i= -2
-2<0
-1+-2 = -3
1++ = 2
while(2<2)
not possible 
comes out of the loop
cout<<-3;
*/
/*
IN THIS Program WE USED:
integer datatype
input from the user 
while loop condition 
if-else statement  
cout or ouput statement 

OPERATOR ARE :

equal operator / assignment operator 
less than operator / relational operator 
increament operator / unary operator 

SYNTAX :

curly and normal brackets 
inverted and normaL Arrowheads
semicolons
*/
