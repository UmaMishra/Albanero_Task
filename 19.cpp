/*
 Return true if the sum of any two elements is equal to the given number. Otherwise, return false.
 
 Approach used in this problem is {Two pointer approach}
 Time Complexity= O(N) for traversing + O(NlogN) for sorting
 space complexity=o(1)
*/
#include<bits/stdc++.h>
using namespace std;
bool valid(int arr[],int n,int target)
{
	int start=0,end=n-1;
	while(start<end)
	{
		if(arr[start]+arr[end]==target)
		{
			return true;
		}
		else if(arr[start]+arr[end]>target)
		{
			end--;
		}
		else
		{
			start++;
		}
	}
	return false;
}
int main()
{
	int n;
	cout<<"Enter n: ";
	cin>>n;
	cout<<"Enter Target: ";
	int target;
	cin>>target;
	int arr[n];
	cout<<"Enter values: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	bool ans=valid(arr,n,target);
	if(ans)
	{
		cout<<"True"<<endl;
	}
	else
	{
		cout<<"False"<<endl;
	}
	
	return 0;
}
