/*
Create a singly linked list. Swap every two adjacent nodes and return the reordered list.
  Expamples:
  Input: 1->2->3->4
  Output: 2->1->4->3
  Input:  1
  Output: 1
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
Node* swapPairs(Node* head) 
{
    Node *temp=head;
	if(head==0 || head->next==0)
    {
    	return head;
    }
      
    while(temp!=0 && temp->next!=0)
    {
        if(temp->data != temp->next->data)
        {
            int t=temp->data;
            temp->data=temp->next->data;
            temp->next->data=t;
        }
        temp=temp->next->next;
    }
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
	Node *t=swapPairs(root);
	cout<<"After Swapping Operation: "<<endl;
	printAll(t);

}
