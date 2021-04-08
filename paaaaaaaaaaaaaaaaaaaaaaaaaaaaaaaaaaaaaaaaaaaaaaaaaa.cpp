#include<bits/stdc++.h>
using namespace std;
int main()
{
	int low,high;
	cout<<"the starting number: ";
	cin>>low;
	cout<<"the ending number: ";
	cin>>high;
	
	int n;
	int r;
	int temp;        
	
	for(n=low;n<=high;n++) //2 = 2; 2<=5; n++ = 3  //10<=21        
	{
		int sum=0;      // sum ==0              // sum ==0
		temp=n;   // temp = n                 // temp = 10
		 
		while(n > 0)
		{
    		r = n % 10;
    		sum = sum * 10 + r;
    		n = n /10;
		} 
		
		if(temp==sum) // 2=2
		{
			cout<<temp<<"= Number is Palindrome.";
		}    
	}      
}
