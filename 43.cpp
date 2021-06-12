/*
Q.43 A sparse matrix has many zero elements. For example, the following 4x4 matrix is a sparse Matrix.
Conventional method of representation of such a matrix is not space efficient. It will be prudent to store non-zero elements only.
If this is done, then the matrix may be thought of as an ordered list of non-zero elements. 
Information about non-zero elements have three parts. Row, Column and its value.
Examples:
Input:
1 0 0 0
0 5 0 2
3 0 0 0
0 0 4 0
Output:
row	column	value
0	 0	  1 
1	 1	  5
1	 3	  2
2 	 0	  3
3	 2 	  4  
*/
#include<bits/stdc++.h>
using namespace std;
void sparse(vector<vector<int> >&arr)
{
	int row=arr.size();
	int col=arr[0].size();
	cout<<"Row"<<" "<<"Col."<<" "<<"Value"<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(arr[i][j]!=0)
			{
				cout<<i<<"   "<<j<<"    "<<arr[i][j]<<endl;
			}
		}
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
	sparse(arr);
	return 0;
}
