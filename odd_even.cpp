#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int n=s.length();
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9')
		{
			sum+=s[i]-'0';
		}
	}
	if(sum%2==0)
	{
		cout<<"even"<<endl;
	}
	else
	{
		cout<<"odd"<<endl;
	}
	return 0;
}
