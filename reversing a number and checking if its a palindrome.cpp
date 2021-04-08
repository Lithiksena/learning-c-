#include<iostream>
using namespace std ;				
int main ()
{
	int n;
	cin>>n; // n is the chesscake you brought from the market 
	int remainder;
	int sum =0;
	int d = n ; // exact copy of the chessecake that you brought from the market so your mon can taste it 
	while (n>0)
	{
		remainder  = n%10;
		sum=sum*10+remainder;// sum is the chessecake you recreated by you eg:121, 111,1331 , 4114
		n=n/10; // you have finished the cheesecake you have brought from the market
	}
	// palindrome numbers are have the value even if they are reversed
	if (sum==d)// matching the orginal cheesecake and the cheesecake you recreated 
	{
		//if they match correcty 
		cout<<"palindrome cheesecake";
		
	}
	else
	{
		// if the both chessecakes are different
		cout<<"not a palindrome cheesecake";
	}
	return 0;
}
