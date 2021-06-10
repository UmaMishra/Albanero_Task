/*
Write a program that takes two numbers as arguments (num, length) and returns an array of multiples of num until the 
array length reaches length.

Ex1:	arrayOfMultiples(7, 5) ? [7, 14, 21, 28, 35]

Ex2:    arrayOfMultiples(12, 10) ? [12, 24, 36, 48, 60, 72, 84, 96, 108, 120]

Time Complexity = O(len)

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,len;
	cout<<"Enter the( Number , length ) :"<<" ";
	cin>>num>>len;
	for(int i=1;i<=len;i++)
	{
		if(i==len)
			cout<<num*i;
		else
			cout<<num*i<<" , ";
	}
	return 0;
}
