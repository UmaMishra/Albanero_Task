#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
		int data;
		Node*next;
};
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
void reOrder(Node *head) 
{
  // use fast/slow points to find the second half of the list       
    Node *head1, *head2;
	Node *preNode, *curNode;
            
    if(!head || !(head->next) )
    {// if the list is empty or only has one element
                return;
    }
    else
    {
        head1 = head;
        head2 = head->next;
                
        // find the starting point of the second half
        while(head2 && head2->next)
        {
            head1 = head1->next;
            head2 = (head2->next)->next;
        }
                
        //reverse the second half
        head2 =head1->next; // the head of the second half
        head1->next =NULL;
        preNode = NULL;
                
        while(head2)
        {
            curNode = head2->next;
            head2->next = preNode;
            preNode= head2;
            head2 = curNode;
        }
                
        // merge the first half and the reversed second half
        head2 = preNode;
        head1 = head;
                
        while(head2)
        {
            curNode = head1->next;
            head1 = head1->next = head2;
            head2 = curNode;
        }
        return;
    }
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
	return;
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
	reOrder(root);
	cout<<endl;
	cout<<"After Reordering all the nodes : "<<endl;
	printAll(root);

}
