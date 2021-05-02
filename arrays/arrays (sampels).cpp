//arrays 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n] = {5,6,7,8,9,10,11,12,13,14,15,16};
	  int i=0;
	  while(i<n)
	  {
		if(i%2==0)
      	{
      		cout<<arr[i]<<" odd"<<endl;
	  	}
	  	else
	  	cout<<arr[i]<<" even"<<endl;
	  	i++;
	  }
	/*  
	int k,m=0, flag=0;   
    int j=0;
    m=12/2;  
	while ( j<12)
    {
    	 for(k = 2; k <= m; k++)  
 	 {  
     	 if(12 % k == 0)  
      	{  
         	 cout<<arr[k]<<"Number is not Prime."<<endl;  
       	   	 flag=1;  
        	 break;  
     	}  
     }  
  		if (flag==0)  
     	cout <<arr[k]<< "Number is Prime."<<endl;  
  		return 0;
  		j++;
	}
     */ 
}  
   

