#include<bits/stdc++.h>
using namespace std;
int max_sum(int arr[],int n,int k)
{
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0 && k>0)
		{
			arr[i]=-arr[i];
			k--;
		}
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	int m=*min_element(arr,arr+n);
	if(k%2!=0){
		sum=sum-2*m;
	}
	return sum;
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
	int ans=max_sum(arr,n,k);
	cout<<ans<<endl;
	return 0;
}
