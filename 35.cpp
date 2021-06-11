/*
 Write a program that takes an array of two numbers and determines if the sum of the digits in each number are 
 equal to each other.

  Examples
    ([105, 42]) ? true
    # 1 + 0 + 5 = 6
    # 4 + 2 = 6

    ([21, 35]) ? false

    ([0, 0]) ? true
*/
#include<bits/stdc++.h>
using namespace std;
bool same(int num1,int num2)
{
	int sum1=0,sum2=0;
	while(num1>0 && num2>0)
	{
		int rem1=num1%10;
		int rem2=num2%10;
		sum1+=rem1;
		sum2+=rem2;
		num1/=10;
		num2/=10;
	}
	return sum1==sum2;
}
int main()
{
	int num1,num2;
	cout<<"Enter Num1 : ";
	cin>>num1;
	cout<<"Enter Num2 : ";
	cin>>num2;
	bool ans=same(num1,num2);
	if(ans)
	{
		cout<<"Same"<<endl;
	}
	else
	{
		cout<<"Not Same"<<endl;
	}
	return 0;
}
