/*
Q.45 Remove the duplicate nodes from the sorted Linked list. The list should only be traversed once. 
Examples:
Input: 1->1->2->2->3->4->5->5
Output: 1->2->3->4->5
Input: 12->15->15->17->17->19
Output: 12->15->17->19
Note: Linked list is already sorted. You can traverse Linked list only once.

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
void removeDuplicate(Node **root)
{
	if(!(*root)) return ;
	Node*p=*root;
	while(p)
	{
		if(p->next!=0 && p->data==p->next->data)
		{
			p->next = p->next->next;
		}
		else{
			p=p->next;	
		}
		
	}
	return;
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
	removeDuplicate(&root);
	cout<<"After Removing Duplication : "<<endl;
	printAll(root);

}

