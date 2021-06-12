/*
Q.47 Check if a given linked list is Palindrome or not. If yes return "True" otherwise "False". Expamples:
Input:  1->2->3->2->1
Output: True
Input: 1->2->3->1->2
Output: False

Approach 1 : using stack

Time complexity= o(no. of node)
space complexity = O(N)

Approach 2: following steps.
			step1 : find the middle node.
			step2 : Reverse the second half linked that is the next of the middle Node
			step3 : At last,simple check first half linked list data to the second half linked list data
			
			Example: 1 - > 2 - > 3  -  >  4 -  >  5
			         first     Middle    second
*/
#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
		int data;
		Node*next;
};
Node* create(int x)
{
	Node*new_node = new Node();
	new_node->data=x;
	new_node->next=NULL;
	return new_node;
}
void insertAtEnd(Node**root,int x)
{
	Node*new_node=new Node();
	new_node->data=x;
	new_node->next=NULL;
	if(!(*root))
	{
		*root=new_node;
		return;	
	}
	Node*temp=*root;
	while(temp->next!=0)
	{
		temp=temp->next;
	}
	temp->next=new_node;
	return ;
}
Node *reverse(Node *head)
{
	if(!head) return head;
	Node *pre=NULL;
	Node *curr=head;
	Node *last=NULL;
	while(curr )
	{
		last=curr->next;
		curr->next=pre;
		pre=curr;
		curr=last;
	}
	return pre;
}
//bool isPalindrome(Node *root)
//{
//	stack<int>s;
//	if(!root) return true;
//	Node*temp=root;
//	while(temp)
//	{
//		s.push(temp->data);
//		temp=temp->next;
//	}
//	
//	while(root)
//	{
//		int num=s.top();
//		s.pop();
//		if(root->data!=num)
//		{
//			return false;
//		}
//		root=root->next;
//	}
//	return true;
//}
bool isPalindrome(Node*root)
{
	if(!root || root->next==0)
	{
		return true;  // only one element or not.
	}
	Node *slow=root;
	Node *fast=root;
	
	//find middle node in the linked list
	while(fast->next!=0  &&  fast->next->next!=0)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	
	slow->next=reverse(slow->next);
	slow=slow->next;
	while(slow!=0)
	{
		if(root->data!=slow->data)
		{
			return false;
		}
		root=root->next;
		slow=slow->next;
	}
	return true;
}
void printAll(Node*root)
{
	if(!root){
		return ;
	}
	Node*temp=root;
	while(temp!=0)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main()
{
	Node*root=NULL;
	int n;
	cout<<"How many Number you want to Insert (N): ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a;
		cin>>a;
		insertAtEnd(&root,a);
	}
	bool ans=isPalindrome(root);
	if(ans){
		cout<<"Palindrome!"<<endl;
	}
	else{
		cout<<"Not a Palindrome!"<<endl;
	}
	return 0;

}

