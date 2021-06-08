/*  an array of positive and negative numbers.
	Return an array where the first element is the count of positive numbers and the second element is the 
	sum of negative numbers.
	
	Time complexity=O(N)
	space complexity=O(1)
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a;
	int first_count=0,second_sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a>0)           //we  will not consider 0 as a positive number,given in question
		{
			first_count++;
		}
		else{
			second_sum+=a;
		}
	}
	cout<<first_count<<" "<<second_sum<<endl;
	return 0;
}
