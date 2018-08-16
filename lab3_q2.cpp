#include<iostream> // including the library
using namespace std;//providing the standard namesapce
int main()// declaration of main function
{
int a,b;//Declaration of variables a and b
a=58;//assiging value to variables and b
b=47;
cout<<"\nthe numbers a,b are:"<<a<<","<<b;//displaying the numbers
cout<<"\nthe difference between the two numbers is (a-b):"<<a-b;/* printing their difference*/ 
cout<<"\n the sum of two numbers is :"<<a+b;/* printing their sum*/ 
cout<<"\n the multiple of both the the numbers is:"<<a*b;/* printing product*/ 
cout<<"\nthe result of divison of a/b and b/a are :"<<(float) a/b<<","<<(float)b/a;/* printing their divisions*/ 
cout<<"\n the reminder when a is divided by b: "<<a%b;/* printing their modulus*/ 
cout<<"\n the reminder when b is divided by a: "<<b%a<<endl;

return 0; // providing the return value of the main function
} 
