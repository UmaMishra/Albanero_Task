/*
Create a singly linked list. Group all the nodes with odd indices together followed by the nodes with even indices, and 
return the reordered list.
The first node is considered odd, and the second node is even, and so on.
Note that the relative order inside both the even and odd groups should remain as it was in the input.
Expamples:
Input:  1->2->3->4->5
Output: 1->3->5->2->4
Input: 2->1->3->5->6->4->7
Output: 2->3->6->7->1->5->4
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
Node* oddEven(Node* head) 
{
	if(!head)
    {
    	return head;
    }
    Node *evenH=head->next;  // even points every even position in the linked list
    Node *even=evenH;
    Node*odd=head;
    while(even && even->next)
    {
    	odd->next=odd->next->next;
    	even->next=even->next->next;
    	odd=odd->next;
    	even=even->next;
	}
	odd->next=evenH;
	return head;
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
	Node *t=oddEven(root);
	cout<<endl;
	cout<<"After Group all the nodes : "<<endl;
	printAll(t);

}
