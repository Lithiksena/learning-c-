#include<bits/stdc++.h>
using namespace std;
void reverse()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int m=0;
	int q=n-1;
	 n=q;
	int temp;
	while(m<q)
	{
		temp=arr[q];
		arr[q]=arr[m];
		arr[m]=temp;
		m++;
		q--;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}
int main()
{
	
	reverse();
}
