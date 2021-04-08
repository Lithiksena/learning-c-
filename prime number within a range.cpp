/*  WAP to find prime numbers within a range 
    In this program we tell the compiler , to find a all the prime numbers 
    winthin a range for example the range it between 3 and 16
    we exculde 3 and 16 and see the numbers inside it so 
    4,5,6,7,8,9,10,11,12,13,14,15
    and then we pick out the prime numbers and print them out 
                    4 is not a prime number 
                    5 is a prime number 
    				6 no
   					7 yes
   					8 no
    				9 no
   					10 no 
    				11 yes
    				12 no 
    				13 yes 
    				14 no 
   					15 no 
    so in this range the prime numbers were 5,7,11 and 13
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int j;
	int i;
	cin>>j;
	int flag =0;

        for (i = 2; i < j; i++)
		{ 
		flag =0;
            if (j % i == 0) 
			{ 
                flag = 1; 
                break; 
            } 
            else
            {
            	flag=0;
			}
        } 
        
        if (flag == 0) 
       		{ 	
	        
        		cout << j <<"=  prime number"<<endl; 
			}
			
            else
            {
            	cout << j<<"=  not prime number"<<endl;
			}
        
} 
