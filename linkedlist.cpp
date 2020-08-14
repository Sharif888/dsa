#include<bits/stdc++.h>
using namespace std;
class node{
public:
	node* next;
	int data;
	node(int d)
	{
		data = d;
		next = NULL;   
	}
};

void insertatfront(node* &head,node* &tail,int data)
{
	if(head == NULL)
	{
		head = tail = new node(data);
	}
	else{
		node* n = new node(data);
		n->next = head;
		head = n;
	}
}
void insertatEnd(node* &head,node* &tail,int data)
{
	if(head == NULL)
	{
		head = tail = new node(data);

	}
	else{
		node* n = new node(data);
		tail->next = n;
		tail = n;

	}
}
void insertatMid(node* &head, node* &tail, int data,int key)
{
	node* temp = head;
	while(temp->data!=key)
	{
		temp = temp->next;
	}
	cout<<endl<<temp->data<<endl;
	node* n = new node(data);
	n->next = temp->next->next;
	temp->next = n;

}
void print(node* head)
{
   while(head!=NULL)
   {
   	cout<<head->data<<" ";
   	head = head->next;

   }
}
int main(){
	node* head = NULL;
	node* tail = NULL;
	int data;
	cin>>data;
	while(data!= -1)
	{
		insertatEnd(head,tail,data);
		cin>>data;
	}
	int key;
	cin>>key;
	cin>>data;
	insertatMid(head,tail,data,key);
	print(head);
	return 0;
}