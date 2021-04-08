/* WAP to write a simple calculator carrying +,-.*, /, % as its operation
in this program we tell the compiler two do a simple operation using these +,-.*, /, %
we give the input of two numbers to the complier so thta it can calculate the operation
*/

# include <iostream>
using namespace std;
int main()
{
    char cal;
    int num1,num2;
    cin>>cal;
    cin>>num1>>num2;

    switch(cal)
    {
        case '+':
            cout<<num1+num2;
            break;

        case '-':
            cout<<num1-num2;
            break;

        case '*':
            cout<<num1*num2;
            break;
            
        case '/':
            cout<<num1/num2;
            break;
        case '%':
        	cout<<num1%num2;
			break;
			
        default:
            break;
    }
    return 0;
}
/*
declaring character called cal
integer decalartion of num1 and num2
taking input for cal as "-"
taking input of num1 = 3 ,num2 = 1
if "cal"
does cal = "+"
no
stop
does cal = "-" 
yes 
3-1= 2
ouput "2"
program ends 
*/

/*
In this program we used:

character datatype
integer datatype
user input (cin)
switch loop
case
break 
ouput (cout)
default
*/







