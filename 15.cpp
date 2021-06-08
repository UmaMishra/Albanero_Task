/*
Take an input, array of numbers and return only the even values.
Time complexity = O(N)
Space Complexity = O(1)
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			cout<<arr[i]<<" ";
		}
	}
}
