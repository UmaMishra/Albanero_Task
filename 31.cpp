#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Row: ";
	cin>>n;
	vector<vector<long long > >vec;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		vector<long long>check(a);
		for(int j=0;j<a;j++)
		{
			cin>>check[j];
		}
		vec.push_back(check);
	}
	
	vector<long long >ans;
	for(auto it : vec)
	{
		int m=LLong_MIN;
		for(auto i: it)
		{
			if(i>m)
			{
				m=i;
			}
		}
		ans.push_back(m);	
	}
	
	for(auto it: ans)
	{
		cout<<it<<" ";
	}
	return 0;
}
