/*
 A set is a collection of unique items. A set can be formed from an array from removing all duplicate items.

*/
#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[], int n)
{
    if (n==0 || n==1)
        return n;
 
    // To store index of next unique element
    int j = 0;
 
    
    for (int i=0; i < n-1; i++)
	{
        if (arr[i] != arr[i+1])
        {
            arr[j++] = arr[i];
        }
    }
 
    arr[j++] = arr[n-1];
 
    return j;
}
int main()
{
	int n;
	cout<<"N : ";
	cin>>n;
	int arr[n];
	cout<<"Enter Number : ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int l=removeDuplicates(arr,n);
	for(int i=0;i<l;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
