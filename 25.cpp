/*
 An isogram is a word that has no duplicate letters. Write a program that takes a string and returns either true or
 false depending on whether or not it's an "isogram".

  Examples
    ("Algorism") ? true

    ("PasSword") ? false
    // Not case sensitive.

    ("Consecutive") ? false
  
  Notes
    Ignore letter case (should not be case sensitive).
    
    Approach 1: Using hashing
    			Disadvantage:(extra space)
    Approach 2: using sorting
*/
#include<bits/stdc++.h>
using namespace std;
bool isogram(string s)
{
	int n=s.length();
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    sort(s.begin(),s.end());
	for(int i=1;i<n;i++)
	{
		if(s[i]==s[i-1])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	string s;
	cout<<"Enter string : ";
	cin>>s;
	bool ans=isogram(s);
	if(ans){
		cout<<s<<" "<<" is a isogram."<<endl;
	}	
	else{
		cout<<s<<" "<<" is not a isogram."<<endl;
	}
	
	return 0;
}
