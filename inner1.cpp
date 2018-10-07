	
//1. Write a C++ program to find power of any number using recursion.
#include <iostream>
using namespace std;

/*
1.get no. and the power n
2.recursion is pow*=x,pow initially=1
3.iterate the loop n ttimes -new parameter i++
*/

//recursive function

int power(int x,int i,int n)
{ 
	if(i==n)
		return 1;
	
	else {
		pow=pow*x;
		i++;
	     }
	power(x,i,pow,i,n);
	return pow;
	
}
d.:
4

//Driver function 
int main ()
{ 	int x,n;
	cout<<"enter the no. and its power:";
	cin>>x>>n;
	int i=0;
	int pow=1;
	power(x,pow,i,n);
	cout<<"required value as x^n is="<<pow;
return 0;
}

