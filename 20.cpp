/*
 Given an array of 10 numbers, return the maximum possible total made by summing just 5 of the 10 numbers.

  Examples
    [1, 1, 0, 1, 3, 10, 10, 10, 10, 1] ? 43
	
	Approach 1= using sorting 
				Time Complexity = O(nlogn) = O(10log10)
				Space Complexity =O(1)
	Approach 2 = using Heap
				 Time Complexity = O(nlogK) = O(10log5)
				 Space complexity = O(N)    
*/
#include<bits/stdc++.h>
using namespace std;
int max_sum(int arr[])
{
	priority_queue<int, vector<int>, greater<int> >p;
	for(int i=0;i<10;i++)
	{
		p.push(arr[i]);
		if(p.size()>5)
		{
			p.pop();
		}
	}
	int sum=0;
	while(p.size()>0)
	{
		sum+=p.top();
		p.pop();
	}
	return sum;
}
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	int ans=max_sum(arr);
	cout<<ans<<endl;
	return 0;
}
