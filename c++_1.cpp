#include<iostream> // including the library
using namespace std;//providing the standard namesapce
int main()// declaration of main function
{
int i;// declaration of integer variable i
i=345;//assinging value for integer variable i
float j;//declaration of float variable j
j=4784.67;//assinging value for float variable j
double k;//declaration of double variable k
k= 92546;////assinging value for double variable k
char ch;//declaration of chararcter variable ch
ch='a';// assiging ch a value
bool r; // declaring boolean data type
r=true;// assigning value to boolean variable r
cout<<endl<<i<<endl<<j<<endl<<k<<endl<<ch<<endl<<r<<endl; /*command ro print the the values stored in i,j,k,ch,r*/
cout<<"size of integer datatype:"<<sizeof(i);/*sizeof() function to display the size of different basic datatypes in c++*/
cout<<"\nsize of float datatype :"<<sizeof(j);
cout<<"\nsize of double datatype: "<<sizeof(k);
cout<<"\nsize of char datatype:"<<sizeof(ch);
cout<<"\nsize of bool datatype:"<<sizeof(r)<<endl;
return 0; // providing the return value of the main function
} 
