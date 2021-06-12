/*
Q.46 Given a simple sentence and a set of syntax rules, validate if it is syntactically correct or not.
 If correct return "True" otherwise "False".
Assume that a sentence is syntactically correct if it fulfills the following rules:
A sentence must start with an uppercase character.
There must be spaces between words.
Then the sentence must end with a full stop ( . ) 
Two continuous spaces are not allowed.
Two continuos uppercase characters are not allowed.
Examples:
Input : This sentence is syntactically correct.
Output : True
Input : This is SYntactically correct.
Output : False
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int n=s.length();
	bool space =false, capital=false, dot=false;
	for(int i=0;i<n-1;i++)
	{
		if(s[i]==' ' && s[i+1]==' ')
		{
			space=true;
			break;
		}
		if(isupper(s[i]) && isupper(s[i+1]))
		{
			capital=true;
			break;
		}
	}
	if(s[n-1]!='.')
	{
		dot=true;
	}
	
	if(!space && !capital && !dot)
	{
		cout<<"True! ";
	}
	else
	{
		cout<<"False! ";
	}
}
