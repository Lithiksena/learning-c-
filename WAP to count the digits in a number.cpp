/* WAP to count the digits in a number
In this program we tell the compiler to count the digits inside of the number 
step 1 : we give two variables; one to count the digits and one for the numeber itself
step 2 :we take in the input for the numeber eg as 56
step 3 :the we seperate the number 56 into seperate digits : 5 and 6 
step 4 :then we count the sepreated digit one by one using the counter varaible :5= 1st number 
                                                                                 6=2nd number 
step 5 :after we ouput  the end  result of the counter variable which was 2 in this 
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;  
	cin>>n; 
	int a=0;
	int r=0;   
	
	while(n>0)   //135>0
	{
		r=n%10;  
		a++;    // 0=56%10 = 6       
		n=n/10;   // 56=56/10 = 5	  
	}
	cout<<a;
	return 0;
}
