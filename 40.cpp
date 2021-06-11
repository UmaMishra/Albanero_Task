/*
Given two strings s and t, check if s is a subsequence of t.
A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of 
the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" 
while "aec" is not).
  Examples:
  Input: s = "abc", t = "ahbgdc"
  Output: true
*/
#include<bits/stdc++.h>
using namespace std;
bool subSequence(string s1,string s2)
{
	int l1=s1.length();
	int l2=s2.length();
	if(l1>l2)
	{
		return false;
	}
	int i=0;
	int j=0;
	int count=0;
	while(i<l1 && j<l2)
	{
		if(s1[i]==s2[j])
		{
			count++;
			i++;
			j++;
		}
		if(s1[i]!=s2[j])
		{
			j++;
		}
	}
	if(count==l1)
	{
		return true;
	}
	return false;
}
int main()
{
	string s1,s2;
	cout<<"Enter String 1: ";
	cin>>s1;
	cout<<"Enter String 2: ";
	cin>>s2;
	cout<<endl;
	bool ans = subSequence(s1,s2);
	if(ans){
		cout<<"s is a subsequence of t."<<endl;
	}
	else
	{
		cout<<"s is not  subsequence of t.";
	}
	return 0;
}
