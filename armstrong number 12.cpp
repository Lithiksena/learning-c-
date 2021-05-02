#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
	int r; 
	int sum; 
	int n1; 
	int mm;
    int low, high;
    cout << " Input starting number of range: ";
    cin >> low;
    cout << " Input ending number of range: ";
    cin >> high;
    
	n1 = n;
	sum = 0;
	
    for (n=low;n<=high;n++) 
    { 

       while (n1 != 0) 
        {
            r = n1 % 10;
            sum = sum + pow(r, 3);
            n1 = n1 / 10;
        }
        if (sum == n)
            cout << n <<" = armstrong number";
    }
    return 0;
}

