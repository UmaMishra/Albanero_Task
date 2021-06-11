/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and
 return its sum.
  Examples:
  Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
  Output: 6
  Explanation: [4,-1,2,1] has the largest sum = 6.
  Input: nums = [1]
  Output: 1
  Input: nums = [5,4,-1,7,8]
  Output: 23
*/
#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[],int n)
{
	int maxSum=INT_MIN;
	int currSum=0;
	for(int i=0;i<n;i++)
	{
		currSum=currSum+arr[i];
		if(maxSum<currSum)
		{
			maxSum=currSum;
		}
		if(currSum<0)
		{
			currSum=0;
		}
	}
	return maxSum;
}
int main()
{
	int n;
	cout<<"N:";
	cin>>n;
	int arr[n];
	cout<<"Enter Number: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int ans = kadane(arr,n);
	cout<<"Maximum sum of subarray : "<<ans<<endl;
	return 0;
}
