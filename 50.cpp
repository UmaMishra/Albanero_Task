/*
Q.50 Given an M X N matrix, print the matrix in spiral order.
Example: 
Input: 
[  1   2   3   4  5 ]
[ 16  17  18  19  6 ]
[ 15  24  25  20  7 ]
[ 14  23  22  21  8 ]
[ 13  12  11  10  9 ]
Output: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25

*/
#include<bits/stdc++.h>
using namespace std;
void spiralTraversal(vector<vector<int> >&arr)
{
	int row=arr.size();
	int col=arr[0].size();
	int top=0, left = 0;
	int down = row-1,  right=col-1;
	int dir=0;
	while(top <= down && left <= right)
	{
		if(dir==0)
		{
			for(int i=left ;i<=right;i++)
			{
				cout<<arr[top][i]<<" ";
			}
			top++;
		}
		if(dir==1)
		{
			for(int i=top;i<=down;i++)
			{
				cout<<arr[i][right]<<" ";
			}
			right--;
		}
		if(dir==2)
		{
			for(int i=right;i>=left;i--)
			{
				cout<<arr[down][i]<<" ";
			}
			down--;
			
		}
		if(dir==3)
		{
			for(int i=down;i>=top;i--)
			{
				cout<<arr[i][left]<<" ";
			}
			left++;
		}
		dir=(dir+1)%4;
	}
}
int main()
{
	int n,m;
	cout<<"Enter Row No. ";
	cin>>n;
	cout<<"Enter Column No. ";
	cin>>m;
	 vector<vector<int> > arr( n , vector<int> (m, 0));
	cout<<"Enter array elements: "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	spiralTraversal(arr);
	return 0;
}
