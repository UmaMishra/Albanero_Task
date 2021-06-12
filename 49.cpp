/*
Q.49 Given an array of distinct positive integers, print all triplets that form an arithmetic progression with an 
integral common difference.
Examples:
Input:  A[] = { 5, 8, 9, 11, 12, 15 }
Output:
5 8 11
9 12 15
Input:  A[] = { 1, 3, 5, 6, 8, 9, 15 }
Output:
1 3 5
1 5 9
3 6 9
1 8 15
3 9 15
*/
#include<bits/stdc++.h>
using namespace std;
void triplet(vector<int>arr)
{
	set<int> s;
	int n=arr.size();
    for (int i = 0; i < n - 1; i++)
    {
    	for (int j = i + 1; j < n; j++)
    	{
        	// Use hash to find if there is
        	// a previous element with difference
       		// equal to arr[j] - arr[i]
        	int diff = arr[j] - arr[i];
        	if (s.find(arr[i] - diff) != s.end())
        	{
        		cout<<arr[i] - diff << " " << arr[i]<< " " << arr[j] << endl;	
			}
    	}
    	s.insert(arr[i]);
    }
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
	triplet(arr);
}
