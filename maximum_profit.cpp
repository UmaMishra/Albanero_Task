#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices) {
    int result = 0;
    for (int i = 1; i < prices.size(); ++i) 
      result += max(prices[i] - prices[i - 1], 0);    
    return result;
}
int main()
{
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int ans=maxProfit(arr);
	cout<<ans<<endl;
	return 0;
}
