/*
Write a program that returns the sum of all even elements in a 2D matrix.
	Time Complexity= O(row *col) = O(n*n)
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int row,col;
	cin>>row>>col;
	int arr[row][col];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>arr[i][j];
		}
	}
	int sum=0;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if((arr[i][j])%2==0)
			{
				sum+=arr[i][j];		
			}
		}
	}
	cout<<sum<<endl;
	return 0;
}
