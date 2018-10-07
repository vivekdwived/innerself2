	//8. Write a C++ program to find sum of digits of a given number using recursion.

#include<iostream>
using namespace std;

/*
JUST LIKE REVESING THE DIGITS DO SUM ISTEAD OF PRINTING
1.get the no in main() 
2.divide it by 10 take remainder =r add to sum =sum+remainder (initially sum=0)
3.print it in main()
*/


int sumdigits(int n,int sum)
{
	if(n==0) return 0;
	else {	int r=n%10;
		sum+=r;
		n=int (n/10);
		sumdigits(n,sum);
		cout<<sum<<endl;
	     }
return sum;
}




//DRIVER FUNCTION 
int main ()
{
	int n;
	cout<<"enter the no. I shall give u sum of its digits:"<<endl;
	cin>>n;
	int sum=0;
	sumdigits(n,sum);
	cout<<sum;

return 0;
}
	
