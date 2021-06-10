/* Write a program that returns the mean of all digits.
  Examples
    (42) ? 3

    (12345) ? 3

    (666) ? 6
*/

#include<bits/stdc++.h>
using namespace std;
int mean(int num)
{
	int sum=0;
	int len=0;
	while(num>0)
	{
		int rem=num%10;
		sum+=rem;
		num/=10;
		len++;
	}
	return sum/len;
}
int main()
{
	int num;
	cout<<"Enter Number: ";
	cin>>num;
	int result=mean(num);
	cout<<result<<endl;
	return 0;
}
