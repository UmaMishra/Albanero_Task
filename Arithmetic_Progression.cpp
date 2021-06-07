#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,diff,n;
	cin>>a>>diff>>n;
	vector<int>v;
	v.push_back(a);
	for(int i=0;i<n;i++)
	{
		int ans=a+diff;
		a=ans;
		v.push_back(a);
	}
	string s="";
	for(int i=0;i<n;i++)
	{
		stringstream ss;
		ss << v[i];
		string str = ss.str();
		s+=str+','+' ';
	}
	cout<<s<<endl;
	return 0;
}
