/*
	Write a program that finds each factor of a given number n.
 	Your solution should return an array of the number(s) that meet this criteria.
 	Ex 1 = (9) -> [1, 3, 9]
 	Ex 2 = (12)-> [1, 2, 3, 4, 6, 12]
 	
 	Approach 1 : using for loop from 1 to n 
 				 Time Complexity = O(N)
 				 
 	Approach 2 : Time Complexity= O(logn)
 				 Space Complexity=o(n)
 	
*/
#include<bits/stdc++.h>
using namespace std;
void fun1(int n)
{
	vector<int>v;
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			if(n/i==i)
			{
				cout<<i<<" ";
			}
			else
			{
				cout<<i<<" ";
				v.push_back(n/i);
			}
		}
	}
	int l=v.size()-1;
	for(int i=l;i>=0;i--)
	{
		cout<<v[i]<<" ";
	}
	return ;
}
int main()
{
	int n;
	cin>>n;
	fun1(n);
	return 0;
}
