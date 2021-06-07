#include<bits/stdc++.h>
using namespace std;
int maxConse(int arr[],int n,int k)
{
	int count=0;
	int start=0;
	int zero=0;
	for(int end=0;end<n;end++)
	{
		if(arr[end]==0){
			zero++;
		}
		while(zero>k)
		{
			if(arr[start]==0)
			{
				zero--;
			}
			start++;
		}
		count=max(count,end-start+1);
	}
	return count;
}
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int ans=maxConse(arr,n,k);
	cout<<ans<<endl;
}
