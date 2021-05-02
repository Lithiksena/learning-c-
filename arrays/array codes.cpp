// differnce between the maxc and min element in an arrayä
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q=0;
	int k=0;
	int c=0;
	int arr[8];
	int n;
	
	sort (arr,arr+n);
	
	number:
    n=arr[k];   
    for(int i=0;i<8;i++)
    {

        if(n==arr[i])   
        {
            c++;        
        }
    }

    if(c%2!=0)
    {
        cout<<n<<endl;
    }
        if(k>=8)
    {
        k++;
        goto number;
    }
	

}

