/*
 Suppose an image can be represented as a 2D array of 0s and 1s. Write a function to reverse an image. 
 Replace the 0s with 1s and vice versa.
 
  Examples
    ([
      [1, 0, 0],		
      [0, 1, 0],     
      [0, 0, 1]
    ]) ->
	 [
      [0, 1, 1],
      [1, 0, 1],
      [1, 1, 0]
    ]
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int row,col;
	cout<<"Enter Row's and Col : "<<endl;
	cin>>row>>col;
	int arr[row][col];
	cout<<"Enter Numbers: "<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(arr[i][j]==1)
			{
				arr[i][j]=0;
			}
			else
			{
				arr[i][j]=1;
			}
		}
	}
	cout<<"Reverse of the Image: "<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;	
}
