/*
Q.41 Count the frequency of the all the elements in an array.
Examples:
Input: [1,2,3,1,4,3,5,6,3,4,2,4,5,3]
Output:
1->2,
2->2,
3->4,
4->3,
5->2,
6->1

Approach: using hashing..
Time Complexity=O(N)
Space Complexity=O(N)
*/
#include<bits/stdc++.h>
using namespace std;
void countFrequency(int arr[],int n)
{
	map<int,int>m;
	for(int i=0;i<n;i++)
	{
		m[arr[i]]++;
	}
	for(auto it: m)
	{
		cout<<it.first<<" - > "<<it.second<<endl;
	}

}
int main()
{
	int n;
	cout<<"Enter N: ";
	cin>>n;
	int arr[n];
	countFrequency(arr,n);
	return 0;
}
