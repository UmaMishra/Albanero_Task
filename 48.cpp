/*
Q.48 Given an integer array, replace each element with the product of every other element without using a division operator.
Examples:
Input:  { 1, 2, 3, 4, 5 }
Output: { 120, 60, 40, 30, 24 }
Input:  { 5, 3, 4, 2, 6, 8 }
Output: { 1152, 1920, 1440, 2880, 960, 720 }

Approach = for left cumulative product..we traverse for once and store the cumulative product
			for right cumulative product...we create a variable and store the cumulative product in that variable .
			
			
time complexity=O(N)
space Complexity=O(N)
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> product(vector<int>arr)
{
	int n=arr.size();
	if(n<1) return arr;
	vector<int>output;
	int product=1;
	for(int i=0;i<n;i++)
	{
		product *= arr[i];
		output.push_back(product);
	}
	
	product=1;
	for(int i=n-1;i>0;i--)
	{
		output[i]=output[i-1] * product;    // output [i-1] for left cumulative product and product variable for right cumulative
											// product
		product*=arr[i];
	}
	output[0]=product;
	return output;
}
int main()
{
	int n;
	cout<<"Enter N: ";
	cin>>n;
	vector<int>arr(n);
	cout<<"Enter array numbers: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	vector<int>ans=product(arr);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
}
