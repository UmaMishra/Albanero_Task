/*
You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either 
climb one or two steps.

Input: cost = [10,15,20]
Output: 15
*/
#include<bits/stdc++.h>
using namespace std;
int minCost(int arr[],int n)
{
	if(n==1)
	{
		return arr[0];
	}
	int dp[n];
	dp[0]=arr[0];
	dp[1]=arr[1];
	for(int i=2;i<n;i++)
	{
		dp[i]=min(dp[i-1],dp[i-2])+arr[i];
	}
	return min(dp[n - 2], dp[n - 1]);   
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
	int ans= minCost(arr,n);
	cout<<"Minimum cost : "<<ans<<endl;
	return 0;
}
  
