/*
	Increasing Decreasing String
	Input: s = "aaaabbbbcccc"
	Output: "abccbaabccba"
	Time Complexity: O( N * 2 * 26 ) = O(N) for very large N
*/

#include<bits/stdc++.h>
using namespace std;
string sortString(string s)
{
    int freq[26];
    for(int i=0;i<26;i++) freq[i]=0;
    for(int i=0;i<26;i++)
    {
        freq[s[i]-'a']++;
    }
    string result="";
    while(s.size()!=result.size())
    {
    	int found=0;
        for(int i=0;i<26;i++)
        {
            if(freq[i])
            {
                result+='a'+i;
                freq[i]--;
                found=1;
            }
        }
        for(int i=25;i>=0;i--)
        {
            if(freq[i])
            {
                result+='a'+i;
                freq[i]--;
                found=1;
            }
        }
        if(found==0)
        {
            break;
        }
    }
    return result;
}
int main()
{
	string s;
	cin>>s;
	string ans= sortString(s);
	cout<<ans<<endl;
	return 0;
}
