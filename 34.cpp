#include<bits/stdc++.h>
using namespace std;
int calculate(int num1,int num2)
{
	int sum=0;
	while(num1>0 && num2>0)
	{
		int rem1=num1%10;
		int rem2=num2%10;
		sum+=abs(rem1-rem2);
		num1/=10;
		num2/=10;
	}
	return sum;
}
int main()
{
	int num1,num2;
	cout<<"Enter Num1 : ";
	cin>>num1;
	cout<<"Enter Num2 : ";
	cin>>num2;
	int sum=calculate(num1,num2);
	cout<<sum<<endl;
	return 0;
}
