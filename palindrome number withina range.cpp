#include<bits/stdc++.h>
using namespace std;
int main()
{
    int high, low;
    cin>>low>>high;
    int temp;
    int temp1;
    int rem;
    
    for(int i = low ; i <= high ; i++)
    {
        temp = i;
        temp1 = i;
        int sum = 0;
        int rem = 0;
        while(temp1 > 0)
        {
            rem = temp1 % 10;
            sum = sum * 10 + rem;
            temp1 = temp1 / 10;
        }
        if(sum == temp) cout<<i<<" is"<<"P.N"<<endl;
        else cout<<i<<" is N.P"<<endl;
    }
    
}
