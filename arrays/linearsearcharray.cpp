#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b;
	cin>>b;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(b==arr[i])
		{
			cout<<"targeted element has been found at index value: "<<i<<endl;
		}
        else
        {
           c++;
        }
	}
    if(c==5)
    {
        cout<<"requested element not found ";
    }
}