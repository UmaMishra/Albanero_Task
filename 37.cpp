/*
 Given an integer num, return an array of the number of 1's in the binary representation of every number in the range [0, num].
  Examples:
  Input: num = 2
  Output: [0,1,1]
  Explanation:
  0 --> 0
  1 --> 1
  2 --> 10
*/
#include<bits/stdc++.h>
using namespace std;
vector<string>getBinary(int num)
{
	queue<string>q;
	vector<string> v;
	v.push_back("0");
	q.push("1");
	for(int i=1;i<=num;i++)
	{
		string temp=q.front();
		q.pop();
		v.push_back(temp);
		q.push(temp+"0");
		q.push(temp+"1");
	}
	return v;
}
int main()
{
	cout<<"Enter number : ";
	int num;
	cin>>num;
	vector<string>arr=getBinary(num);
	vector<int>v;
	for(int i=0;i<arr.size();i++)
	{
		string str=arr[i];
		int m=0;
		for(int j=0;j<str.length();j++)
		{
			if(str[j]=='1')
			{
				m++;
			}
		}
		v.push_back(m);
	}
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}
