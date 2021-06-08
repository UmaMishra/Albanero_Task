/*
	Count the number of 1s in a given 2D array.
	Time Complexity = O(N*N)
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
	int count=0;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(arr[i][j]==1){
				count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
