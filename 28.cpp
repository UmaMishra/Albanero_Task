/*
Parity bits are used as a very simple checksum to ensure that binary data isn't corrupted during transit. Here's how they work:

  If a binary string has an odd number of 1's, the parity bit is a 1.
  If a binary string has an even number of 1's, the parity bit is a 0.
  The parity bit is appended to the end of the binary string.
  Write a program that adds the correct parity bit to a binary string.

  Examples
    ("1011011") ? "10110111"
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cout<<"Enter Binary String : ";
	cin>>s;
	int count=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='1')
		{
			count++;
		}
	}
	if(count%2!=0)    //Odd Number of count
	{
		s+="1";
	}
	else
	{
		s+="0";
	}
	cout<<s<<endl;
	return 0;
}
