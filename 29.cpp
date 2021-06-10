/*
 Write a program that squares every digit of a number.

  Examples
    (9119) ? 811181

    (2483) ? 416649

    (3212) ? 9414
    
*/
#include<bits/stdc++.h>
using namespace std;
int square_every_digit(int num)
{
	string s="";
	while(num>0)
	{
		int rem=num%10;
		rem=rem*rem;
		
		//convert integer into string
		stringstream ss;
		ss<<rem;
		string str=ss.str();
		
		//insert every string at the front of s rather than append it, otherwise you get wrong ans.
		s=s.insert (0,   str);

		num/=10;
	}
	int ans = atoi(s.c_str());
	return ans;
}
int main()
{
	int num;
	cout<<"Enter Number : ";
	cin>>num;
	int ans=square_every_digit(num);
	cout<<ans<<endl;
}
