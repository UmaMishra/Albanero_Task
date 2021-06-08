// time complexity= O(nlogn) 
// space complexity=O(n)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr1[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	sort(arr1,arr1+n);
	int arr2[n]; // new array is created because in question ,it is mentioned that we have to return the another sorted array
	for(int i=0;i<n;i++)
	{
		arr2[i]=arr1[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr2[i]<<" ";
	}
	return 0;
}
