		/* Write a C++ program to find sum of all natural numbers between 1 to n using recursion.*/


	#include<iostream>
	using namespace std;

	/*recursive function
	1.get nos. from main.
	2.call..it 
	3.sum is variable sum=0...sum =sum +i,i++
	4.return th e function again till i==n..
	5. come back to main print sum;
	*/

	int naturesum(int n,int sum,int i)
	{ 	
		if(i==n)  return sum;
		i++; 
		sum+=i;
		naturesum(n,sum,i);
	return 1;
	}


	//DRIVER FUNCTION
	int main()
	{	int n;
		cout<<"enter the no. till which sum is required:";
		cin>>n;
		int sum=0;
		int i=0;	
		naturesum(n,sum,i);
		cout<<sum;
	return 0;
	}
