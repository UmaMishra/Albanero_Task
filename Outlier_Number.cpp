#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>arr;
	int odd=0,even=0;
	int eNum,oNum;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		arr.push_back(a);
		if(a%2==0){
			even++;
			eNum=a;
		}
		else
		{
			odd++;
			oNum=a;
		}
	}
	if(even>odd){
		cout<<oNum<<endl;
	}
	else
	{
		cout<<eNum<<endl;
	}
	return 0;
}
