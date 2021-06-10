/*
A repdigit is a positive number composed out of the same digit. Write a program that takes an integer and returns 
whether it's a repdigit or not.

  Examples
    (66) ? true

    (0) ? true

    (-11) ? false

  Notes
    The number 0 should return true (even though it's not a positive number).
*/
#include<bits/stdc++.h>
using namespace std;
bool repdigit(int num)
{
	if(num==0)
	{
		return true;
	}
	if(num<0)
	{
		return false;
	}
	int a=num%10;   //store the last digit of number to check the remaining digits of the number.
	char ch=static_cast<char>(a); //static_cast<char>(a) is used to convert the integer into char.
	num/=10;
	while(num>0)
	{
		int rem=num%10;
		char c = static_cast<char>(rem); 
		if(ch!=c)
		{
			return false;
		}
		num/=10;
	}
	return true;
}
int main()
{
	cout<<"Enter Number : ";
	int num;
	cin>>num;
	bool ans=repdigit(num);
	if(ans)
	{
		cout<<"True"<<endl;
	}
	else
	{
		cout<<"False"<<endl;
	}
}
