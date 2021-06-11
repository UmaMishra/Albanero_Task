/*
Write a program that takes an array of names and returns an array where only the first letter of each name is capitalized.

(["mavis", "senaida", "letty"]) - >  ["Mavis", "Senaida", "Letty"]
*/

#include<bits/stdc++.h>
using namespace std;
string calling(string s)
{
	transform(s.begin(),s.end(),s.begin(),::tolower);
	s[0]=toupper(s[0]);
	return s;
}
int main()
{
	int n;
	cout<<"N: ";
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	string ans[n];
	int j=0;
	for(int i=0;i<n;i++)
	{
		ans[j++]=calling(s[i]);
	}
	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<endl;
	}
	return 0;
}
