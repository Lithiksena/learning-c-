#include <iostream>
using namespace std;
int main()

{
  int a;
  cout<<"Enter a year: "<< endl;
  cin>> a;
         if((a % 4) ==0)
  
         {
             cout<<" Leap Year ";
          }
         else
         {
            cout <<" Not a Leap Year" << endl;
          }
  return 0;
}

