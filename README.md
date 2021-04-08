# learning-c-
i will be uploding codes that simple and for begginers , as time passes i will upload more complex and advanced codes!

<h1> CPP </h1>

C++ is a programming language, it's a hardware-oriented language.  

Which means: the computer likes it more therefore its <b> harder to code but for the computer its easier for them to understand and solve! </b> 

 

<h2> History about C++ </h2> 

C++ programming language was developed in 1980 by Bjarne Stroustrup at bell laboratories of AT&T (American Telephone & Telegraph), located in U.S.A. Bjarne Stroustrup is known as the founder of C++ language. It was developed for adding a feature of OOP (Object Oriented Programming) in C without significantly changing the C component. C++ programming is "relative" (called a superset) of C, it means any valid C program is also a valid C++ program. C++is loved by computers, but python is being loved users 
 
<h2> C++ Features: </h2>

C++ is object-oriented programming language. It provides a lot of features that are given below. 

<ul>
  <li>Simple</li>
  <li>Machine Independent</li>
  <li>Mid-Level Programming Language</li>
 <li> Rich libary </li>
 <li> Memory Management  </li>
 <li> Fast Speed  </li>
  <li> Pointers (refer to the address)  </li>
  <li> Recursion </li>
  <li> Extensible </li>
 <li> Object Oriented </li>
  <li> Compiler based  </li>
 
</ul>

Here are some important terms in the programming language c++ 

 

<h1> #include </h1> In C++, all lines that start with pound (#) sign are called directives and are processed by pre-processor which is a program invoked by the compiler.  

The #include directive tells the compiler to include a file and #include<iostream>. #include<cmath> #include<string> 

It tells the compiler to include the standard iostream file which contains declarations of all the standard input/output library functions. 

 

<h1> using namespace std </h1> This is used to import the entirety of the std namespace into the current namespace of the program.  

The statement using namespace std is generally considered a bad practice. using std:: in front of commands is considerded to be better. 

When we import a namespace, we are essentially pulling all type definitions into the current scope.  

 

<h1> int main ()</h1>This line is used to declare a function named “main” which returns data of integer type. 

 A function is a group of statements that are designed to perform a specific task.  

Execution of every C++ program begins with the main () function, no matter where the function is located in the program. So, every C++ program must have a main () function. 

 
<h1>statement  </h1>
std::cout<< “Hello World”; This line tells the compiler to display the message “Hello World” on the screen.  

This line is called a statement in C++. Every statement is meant to perform some task. A semi-colon ‘;’ is used to end a statement.  

Semi-colon character at the end of statement is used to indicate that the statement is ending there.  

The std::cout is used to identify the standard character output device which is usually the desktop screen.  

Everything followed by the character “<<” is displayed to the output device. 

 

<h1> Input/Output. </h1> 

return 0; ->This is also a statement. This statement is used to return a value from a function and indicates the finishing of a function.  

This statement is basically used in functions to return the results of the operations performed by a function. 

 

<h1>Indentation</h1>  As you can see the cout and the return statement have been indented or moved to the right side.  

This is done to make the code more readable. In a program as Hello World,  

it does not hold much relevance seems but as the programs become more complex, it makes the code more readable, less error-prone. 

Therefore, you must always use indentations and comments to make the code more readable. 

 

 

<h1>Datatypes and thier functions in c ++</h1> 

 

There are three different sections of datatypes: this one is the primitive datatype 

These datatypes are already defined in the compiler  

 

 

<h1>String</h1> string is a datatype that stores the name or any letters they act as variables they hold no value but if they are called upon, they respond to (it's like your username in a game), e.g.: string a = “lithik” 

<h1>Integer (int)</h1>   integer is a datatype that allows you to store a whole number value by giving it a variable before the equal sign, it holds the value of which the user declares, e.g.:  

int a = 12 

 <h1>long</h1> long is a datatype that is basically acts like integer but can hold bigger values, e.g.: long = 1536731671376317 but int = 613878732 

 <h1>float</h1> is a datatype that can hold a value of only two decimal places, e.g. : 

 float  a = 37.36 

<h1>Character(char)</h1> is a data type that holds one character (letter, number, etc.) of data., eg : char = a  

<h1>double</h1> is a datatype that can hold a value of more than two decimal places, e.g.: double: 37.367767764 

<h1> Boolean</h1> is a datatype that gives a response of true or false, e.g. is 2+2= 3? False …. is 2+2=4? True. 

<h1>Void</h1> is a datatype that can be used instead of main () but it doesn’t give anything in return like main, for example int  main () will give 2+2= `2’ but void will 2+2=?  

 

 

 

 

 

<h2>This is all sizes and ranges of the datatypes </h2>

<h2>char </h2>

size: 1 byte  

range: -128 to 127 or 0 to 255 

<h2>Int </h2>

size:  4 bytes 

range: -2147483648 to 2147483647 

<h2>Void </h2>

range: No return 

<h2>bool </h2>

 

range: True or false  

 

<h2>short int</h2>

size: 2 bytes 

range: -32,768 to 32,767 

<h2>unsigned short int</h2> 

size: 2 bytes 

range: 0 to 65,535 

<h2>unsigned int </h2>

size: 4 bytes 

range: 0 to 4,294,967,295 

<h2>int </h2>

size: 4 bytes 

-range: 2,147,483,648 to 2,147,483,647 

<h2>long int</h2> 

size: 8 bytes 

range: -2,147,483,648 to 2,147,483,647 

<h2>unsigned long int </h2> 

size: 4 bytes 

range: 0 to 4,294,967,295 

<h2>long long int </h2>

size: 16 bytes 

range: -(2^63) to (2^63)-1 

<h2>unsigned long long int </h2>

size: 16 bytes 

range: 0 to 18,446,744,073,709,551,615 

<h2>signed char </h2>

size: 1 byte 

range: -128 to 127 

<h2>unsigned char </h2>

size: 1 byte 

range: 0 to 255 

<h2>float </h2>

size: 4 bytes 

range: 0.00 


<h2>double </h2>

size: 8 bytes 

range: 0.0000000.... 

<h2>long double </h2>

size: 12 bytes 

 

<h2>wchar_t </h2>

size: 2 or 4 bytes 

range: 1 wide character 

 

 

The other datatypes you see here are the same as the ones mentioned above but they can hold bigger or shorter or negatives value or characters  

 

 
<h1> unfinshed </h1>
 

Operators and operands  

++a + b + d && d > i | 0 

Operators: They are set of symbols + helps in functioning + adding/ subtracting/ multiplying/dividing/ modulus]-> Calculations  

Operands: a + b => a is an operand and b is an operand (On what the operation is being performed by the operators we call them operands) 

 

Are C++ Operators in-built? 

Yes, they are in-built.  

 

Arithmetic operators: Arithmetic operations such as addition, multiplication, subtraction, 

 division.  

Of two types: Binary and Unary  

 

Unary  

++ , --  

 

int a = 5; 

++a; it will return 6  

--a; it will return 4 

 

two types of unary operator: 

Post fix operators and Pre fix operators  

 

++a == Prefix operator  

a++ == Postfix operator  

 

--a == Prefix operator  

a-- = Postfix operator  

Prefix operators don’t store the value to the memory but they add one more and one less and return a value,  

eg : int a = 2  

       Int b = ++a = 3 but in memory it's still 2  

Postfix operators stores the value to the memory and they add one more and one less but they display a value of the original number (opposite of prefix)  

Eg : int a = 2  

       Int b = a++= 2 but in memory its 3 

 

int a = 5; 

int b = 6; 

 
 

int c = ++a + a++ + a++ + ++b  // b = 7 ; a = 5 in real but in memory 6  

int c = 8 + 6 + 5 + 7 

 
 

int c = --a + a++ +  b++ + --a + ++b + a - --b + b; 

4 + 4 + 6 + 4 + 6 + 5 - 5 + 6 = 30 is the answer  

 
 

Noted: Unary operators work on single operand 

Binary Operator: Work with 2 operands  

 
Binary operator  

/ * - + %  

 

+ = addition  

-= subration 

/ = division  

*= multiplication  

% = modulus (this operation is like division but it only gives the remainders) 
 

    //We are here to explore arithmetic operator 

    int a = 6; 

    int b = 5; 

 
 

    //1. Addition  

    int c = a + b; 

    cout<<"Addition of 2 numbers: "<<c<<endl; 

 
 

    //2. Subtraction  

    int d = a - b; 

    cout<<"Subtraction of 2 numbers:"<<d<<endl; 

 
 

    //3. Multiplication  

    int e = a * b; 

    cout<<"Multiplication of 2 numbers:"<<e<<endl; 

 
 

    //4. Division  

    int f = a/b; 

    cout<<"Division of 2 numbers:"<<f<<endl; 

 
 

    //5. Modulus 

    int g = a % b; 

    cout<<"Modulus of 2 numbers:"<<g<<endl; 

 
 
 

UNARY OPERATOR  

 

    int a = 5; 

 
 

    /*int res = a++; 

 
 

    cout<<"The value of res: "<<res<<endl; 

    cout<<"The value of a: "<<a<<endl; 

 
 

    //Expected res = 6 and a to be 5  

    //In real it came out to be opposite */ res = 5 ; a =  6; 

 
 

    int res = ++a; 

    cout<<"The value of res: "<<res<<endl; 

    cout<<"The value of a:" <<a<<endl; 

 
 

    //Expectations: res = 5 ; a = 5; 

    //Reality: res = 6 ; a = 6; 

 

 

 

 

RELATIONAL OPERATORS 

 

  > : Greater than 

< : Less than 

== : Equality Operator  

>= : Greater than equal to  

<= : Less than equal to  

!= : Not equal to  

 
 

Lithik goes to a supermarket.  

 
 

Lithik's mom tells him to bring the chip greater than 15. But the chips which attracted him was not equal to 15. But, greater than 15 and less than 25.  

 
 

Guess: 16 to 24  

Now lithik's mom come up with a value of 20  

 
 

No, the chips were not equal to 20 but it was less than 25 and greater than 20  

 
 

Guess: 21 to 24  

 
 

Now lithik's mom come up with a value of 22.  

Yaa you were right to value of chips was equal to 22.  

 
 

greater than 21 and less than 25  

 
 

set range: 22,23,24 

 
 

greater than equal to 21 and less than equal to 25 

 
 

set range: 21,22,23,24,25 

 
 

Why we call them as a relational operators? 

 

Because we related two operands, or we can relate two things so we call 

 them as relational operator. 

How to turn any decimal number to a binary form 

note: modulus operator is used to return remainder from a particular value 

Decimal --> Binary  

128 / 2 =quotient = 64 ; remainder = 0  

64 / 2 = quotient = 32 ; remainder = 0 

32 / 2 = q = 16 ; r = 0 

16 / 2 = q = 8 ; r = 0 

8 / 2 = q = 4 ; r = 0 

4 / 2 = q = 2 ; r = 0 

2 / 2 = q = 1 ; r = 0 

1 / 2 = q = 0 ; r = 1  

 

Now, let us collect all the remainder  

0 0 0 0 0 0 0 1 ==> Normal representation by us  

1 0 0 0 0 0 0 0 ==> Binary representation or actual representation (understanding concept with stack) 

 
 

 

 
 

 

Logical operators 

Logical operators are operators that make sense or logic  

  

Logical AND - && 

Logical OR - || 

Logical NOT -   ! ( followed by the variable you have declared) 

 

Logical AND is declared when two statements should be true  

Example: you want to buy a banana for less than 20 rupees and orange for less than 50 rupees 

So if the input was : banana= 21 rupees and orange =40 ruppes  

                  The condition would be false because both of the statements has to be true  

BUT if the input was : banana= 18 rupees and orange =40 rupee 

                     The condition would be true because both of the statements are lesser than the original order. 

 

Ex: 

You went out a super market. 

 
 

Ordered : To bring banana and orange. But, the condition was you can spend more than 40 rupees on Banana and more than 80 rupees on oranges  

 
 

int oranges, banana; 

cin>>oranges>>banana; //Provided by you 

 
 

//Cost 1. oranges = 70 ; banana = 50  

//Cost 2. oranges = 90 ; banana = 20  

//Cose 3. oranges = 40 ; banana = 80  

//Cost 4. oranges = 81 ; banana = 41  

if (banana > 40 && oranages > 80) 

{ 

    cout<<"Very happy" 

} 

 
 

//Condition 1  

 
 

if(50 > 40 && 70 > 80) 

 
 

// 1. true and 1. false  

 
 

//condition 2 

if(20 > 40 && 90 > 80) 

 
 

//1.false 2.true  

//condition 3 

if(80 > 40 && 40 > 80) 

 
 

//1.true 2.false  

 
 

//condition 4 

if(41 > 40 && 81 > 80) 

 
 

//1.true 2.true  

 
 

In which condition "Very happy" will be printed? 

 
 

In condition 4.  

 
Logical OR - || 

This operator is very similar to LOGICAL AND but there is one major change in this operator . This operator LOGICAL OR is declared when you need only one of the conditions to be true . 

For example:   you are hungry and you have two choices to eat in front of you , you have a pizza on the right side and burger and the left side , you have to eat to get rid of your hunger , one of the foods can fill your stomach or you can choose to eat them both , so picking on of them will satisfy your condition or the both would also satisfy! 

LOGICAL OR IS DECLARED LIKE THIS: if ( a > b|| b>a) 

                                                                   Cout << “true”; 

Logical not - ! 

This is the most complicated logical operator, the ‘!’ operator returns true the condition in consideration is not satisfied. Otherwise it returns false. For example,!a returns true if a is false, i.e. when a=0. 

For example: you eat rice when you're not hungry and you decide not to eat when you're hungry so basically it’s the opposite! 

 

 

 

 Bitwise Operators 

 

Bitwise operators work on two different or same operands and turn them into the binary representation form , find the condition and with the final binary number they turn it back into the decimal form. 

 

BITWISE AND - & 

BITWISE OR -    | 
 

Bitwise and (&) 

 
Ex: 

3 and 4  

 

011 & 100 

 

011 

100 
 

1 & 0 = 0 

1 & 0 =  0 

0 & 1 = 0 

 

0 0 0  

1 & 1 = 1 

 

5 & 9  

 

Step 1: Convert 5 and 9 into Binary Numbers  

 
Solution: 101 and 1001  

 

Step 2: Place both the binary numbers in the way, you put to do addition  
 

0101  

1001  

 

Step 3: Compare each and every bit  

 

Left to right we process ( 2^ 0  to ahead) 

1 & 1 = 1 ==left most bit  

0 & 0 = 0 

1 & 0 = 0 

0 & 1 = 0 == right most bit  

rightmost bit - ---- > leftmost bit  

 
0001 

Step 4: Convert that binary to decimal  
 

1 * pow(2,0) + 0 + 0 + 0 = 1  
 

Final answer: 1 
 

This is how the bitwise and works it takes two decimal numbers turns them into binary form and does the special AND condition ( if both of them is true : the result would  be true but if one of them is false they both would be false :just like logical and) and then takes the final binary numbers and turns them into the decimal form as you have seen it above  
 

Bitwise OR (|) 
 

Solving Bitwise or for 18 and 19  

 

18 -> 10010 

19 -> 10011 
 

//checking for 18 

0 * pow(2,0) + 1 * pow(2,1) + 0 + 0 + 1 * pow(2,4) 

0 + 2 + 0 + 0 + 16 = 18  
 

//checking for 19  

1 *pow(2,0) +  1* pow(2,1) + 0 * pow(2,2)  + 0 + 1*pow(2,4) 

1 + 2 + 0 + 0 + 16 = 19  
 
 

10010 

10011  

 

starting from left  

 

0 | 1 = 1 

1 | 1 = 1 

0 | 0 = 0  

0 | 0 = 0  

1 | 1 = 1 

 

writing from bottom to top(line 33 to 29) 

 

10011 

 

Convert into decimal (starting from right to left) 

 

1 * pow(2,0) + 1 * pow(2,1) + 0 + 0  + 1 * pow(2,4) 

1 + 2 + 16 = 19  

 

Final answer = 19  

 
This is how the bitwise and works it takes two decimal numbers turns them into binary form ( which Is the same as bitwise )and does the special OR condition instead of and ( if one of them is true : the resukt would also be true just like locical and ) and then takes the final binary numbers and turns them into the decimal form as you have seen it abvove  
 

Assignment Operators  

Assignment operators they Assign someone with something 

 

a+=b ==> a = a + b; 

This basically tells that the variable a is now being added with the variable b  

a-=b ==> a = a - b; 

This basically tells that the variable a is now being subtracted with the variable b 

a*=b ==> a = a * b; 

This basically tells that the variable a is now being multiplied by the variable b 

a/=b ==> a = a / b;  

This basically tells that the variable a is now being divided by the variable b 

 

Assignment operator is also known as shorthand operator 

Ex: these operators are like assigning people with tasks for example if a teacher gives, my homework and the due date is tomorrow, I have been assigned with a task called homework but we give tasks to a computer that’s why it's called assignment operators 

 

Other useful operators  

Comma operator 

Conditional operator 

Sizeof operator 

 

Sizeof operator: 

Sizeof operator is an command used for looking at sizes of datatypes  

Ex: this is used because people tend to forget the szies of the dataypes so they simply implement this code and the complier will tell you the accurate size of the datatype oe the variable 

 

 

Conditional operator 

Conditional operator is when there is a condition between two things  

Ex:  

if(5 < 6) 

{ 

    cout<<"dhruv"; 

} 

else{ 

    cout<<"lithik"; 

} 

 
 

5 < 6 ? cout<<"dhruv" : cout<<"lithik" 

 
 

A < B ? EXP 1 : EXP 2 

 
 

if condition is true, expression 1 would run successfully else exp 2 will run successfully 

 
Comma operator 

 When The comma operator is used, it excludes all of the results except the last operand and shows us only the last operand . 

Ex: 

#include <iostream> 

using namespace std; 

int main()  

{ 

    int a = (1,2,3); 

    cout<<a; 

    return 0; 

} 

The answer is 3 because we used the comma operator which made it to exclude the first two but keep the last one  






<h1>if , if else and nested if statements</h1>

if and nested if statement 

with the if statement we go through all the lines to check wheather each condition is true , Nested if allows the user to put more than one if statement in a row or inside
another if statement saving more time .However using if statements also
increases the time complexity. 
eg:
question : which is false : 4+1=5, 3*2=9, 8-2=6

if we use the if statement: 
int i;
int w;

i=4+1=w
if(w==5)
cout<<"true";
else
cout<<"false";

i=3*2=w
if(w==9)
cout<<"true";
else
cout<<"false";

i=8-2=w
if(w==6)
cout<<"true";
else
cout<<"false";

in this programm , the computer checksv each condition and stores them in its memory to later compare which statement is flase, by doing this we increase its time complexity . We can avoid this by using if else block , if else checks conditions similar to a normal if statment however it kills each condition if it isnt what the user asked 
eg:

int i;
int w;

i=4+1=w
if else (w==5)
cout<<"true";
else
cout<<"false";

i=3*2=w
if else (w==9)
cout<<"true";
else
cout<<"false";

i=8-2=w
if else (w==6)
cout<<"true";
else
cout<<"false";


since we used if else command here , we reduce the tinme complexity . The computer doesnt store its previous conditions if it isnt what the user aksed for , so in this case the compiler ignores the first two conditions and and only stores the statements that were false . 



<h1>FUNCTIONS</h1> 

Functions are used to help us understand the code better and reduce its time complexity.

void functions :

these type of functions dont have a return type, so they are returned int main. A void function is like a shopping bag , it is  used to store goods in a effecient way however it doesnt have a mind of its own. the person carrying the bag is int main and void is used to make thing look better and handle commands faster .

eg:

#include<bits/stdc++.h>
using namespace std;
void multiply (int num)
{
	 for(int a=1;a<11;a++)
    {
        cout<<num<<"*"<<a<<"="<<num*a<<endl;
    }
}
int main()
{
   	int num;
	cin>>num;
	multiply(num);
}





<h1>PARAMETERS </h1>



Both actual and formal parameters refer to same locations, 
so any changes made inside the function are actually reflected in
actual parameters of caller.

Parameters are always passed by value in C++. 

#include <iostream> 
using namespace std; 

void k(int *ptr) 
{ 
	*ptr = 30; 
} 

int main() { 
	int x = 20; 
	k(&x); 
	cout << "x = " << x; 
	
	return 0; 
} 

// In C++, both void fun() and void fun(void) are same.

Main Function:
The main function is a special function. 
Every C++ program must contain a function named main. 
It serves as the entry point for the program. 
The computer will start running the code from the beginning of the main function.

Types of main Function:

1) The first type is – main function without parameters :

// Without Parameters 
int main() 
{ 
   ... 
   return 0; 
} 

2) The main function with parameters 

// With Parameters 
int main(int argc, char * const argv[]) 
{ 
... 
return 0; 
} 

The reason for having the parameter option for the main function is to allow input from the command line.

When you use the main function with parameters,
 it saves every group of characters (separated by a space) after the program name as elements in an array named argv.

Since the main function has the return type of int, the programmer must always have a return statement in the code. 
The number that is returned is used to inform the calling program what the result of the program’s execution was. 
Returning 0 signals that there were no problems`


