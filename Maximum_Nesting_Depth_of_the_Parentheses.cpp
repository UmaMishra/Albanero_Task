#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int m=0,count=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='(')
		{
			count++;
		}
		if(s[i]==')'){
			count--;
		}
		m=max(m,count);
	}
	cout<<m<<endl;
	return 0;
}
