/*
 You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Approach 1:= Using Recursion
 A simple recursive program to
 find N'th fibonacci number
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
time complexity=:O(2^n)
space complexity=:O(n) stack;

Approach 2 := Using Dynamic Programming.
	int stepCount(int n) 
    {
        if(n==1)
        {
            return 1;
        }
        int dp[n+1];
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
        
    }
    
    Time Complexity: O(n)

	Space Complexity: O(n)
	
Approach 3: Optimized solution
	Iterative solution of fib(n)
	time complexity=O(N)
	space complxity=O(1)
*/
#include<bits/stdc++.h>
using namespace std;
int stepCount(int n)
{
	if(n<=2)
	{
		return n;
	}
	int x=1;
	int y=2;
	for(int i=3;i<n;i++)
	{
		int temp=y;
		y+=x;
		x=temp;
	}
	return (x+y);
}
int main()
{
	int n;
	cout<<"Enter N: ";
	cin>>n;
	int ans=stepCount(n);
	cout<<"Total Number of Ways : "<<ans<<endl;
	return 0;
}
