	//5. Write a C++ program to find sum of all even or odd numbers in given range using recursion
#include<iostream>
using namespace std;

/*
1.get no, in  main ()
2.make fun1..for evensum having i+=2...till  i<=n& sum +=i
3,make fun2 ..for oddsum having i+=2..till i<n  sum+i
4.calll each one in main and print the output
*/

// sum of even ones
int evensum(int n,int i,int sum1)
{
	if (i>n) return 0;
	else {	i+=2;
		//cout<<i<<endl;
		sum1+=i;
		evensum(n,i,sum1);
	     }
return sum1;
}

//sum of odd ones..whoooooo....hooo....
int oddsum(int n,int i,int sum2)
{
	if(i>n) return 0;
	else {	i+=2;
		//cout<<i<<endl;
		sum2+=i;
		oddsum(n,i,sum2);

	     }
return sum2;
}


//	DRIVER FUNCTION
int main ()
{
	int n;
	cout<<"enter the no till which sum of even or odd is needed.:"<<endl;
	cin>>n;
	int i=0;
	int sum1=0;
	
	
	 evensum(n,i,sum1);
	cout<<sum1;

	i=1;
	int sum2=0;
	cout<< "I WANT SOMME THING  JUST LIKE THIS "<<endl;
	oddsum(n,i,sum2);
	cout<<sum2;
return 0;
}
