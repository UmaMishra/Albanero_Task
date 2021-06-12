/*
Q.42 Reverse the given Linked list.
Examples:
Input : 1->2->3->4->5
Output: 5->4->3->2->1
Input : 1->3->5->7
Output: 7->5->3->1
note: you need to reverse the node itself, not the data part.

Linked List=   Null    1 - >2 - >3 - >4 - > 5
				|     
				Pre   curr last
											pre
											head=pre
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
	head=pre;
	return head;
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
	Node *t=reverse(root);
	cout<<"After Reversing  Operation: "<<endl;
	printAll(t);

}

