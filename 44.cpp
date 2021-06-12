/*
Q.44 Given an array of integers, update every element with multiplication of previous and next elements with following exceptions. 
Note: a) First element is replaced by multiplication of first and second. 
      b) Last element is replaced by multiplication of last and second last.
Examples:
Input:  [2, 3, 4, 5, 6]
Output: [6, 8, 15, 24, 30]
// We get the above output using following
// arr[] = {2*3, 2*4, 3*5, 4*6, 5*6} 
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter N:";
	cin>>n;
	int arr[n];
	cout<<"Enter Elements :";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int ans[n];
	ans[0] = arr[0] * arr[1];
	for(int i=1;i<n-1;i++)
	{
		ans[i] = arr[i-1] * arr[i+1];
	}
	ans[n-1] = arr[n-1] * arr[n-2];
	
	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}
