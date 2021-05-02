#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int c=0;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	/*
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			c++;
			
		}
	}
	*/
	int w;

	
		for(int i=0;i<n;i++)
		{
			if(arr[i]>0 && i>=n/2)
			{
				continue;
			}
			 if(arr[i]<0 && i<=n/2)
			{
				continue;
			}			
			 if(arr[i]>0 && i<=n/2)
			{
				w=i;
			}
			 if(arr[i]<0 && i>=n/2)
			{
				swap(arr[i],arr[w]);
			}
		}
	
	
	
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"  ";
	}
	
}
