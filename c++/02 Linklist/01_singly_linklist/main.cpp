#include <bits/stdc++.h>
//#include<iostream>
//#include<vector>
//#include <unordered_map>

using namespace std;

class Node
{
public:
	int data;
	Node *next;

	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

void Insert_at_Head(Node* &head, int data)
{
	// new node created
	Node *temp = new Node(data);
	temp->next = head;
	head = temp;
}
void insert_At_Tail(Node* &tail,int d){
	//creation of new node:-
	Node* newNode = new Node(d);
	//addind new node at tail
	tail -> next=newNode;
	//update tail pointer 
	tail=newNode;

}
void insert_At_Position(Node* &head,int value,int position){

if(position==1){
	Insert_at_Head(head,value);}
else{
	Node* newNode = new Node(value);
	Node* prev=head;
	int t = position-2;
	while(t--){
		prev = prev->next;
	}
	newNode->next= prev->next;
	prev->next=newNode;	
}
}
void deletion_at_Value(Node* &head,int target){
	Node *temp =head;
	if(target==temp->data  )
}

void Print(Node *&head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << endl;
		temp = temp->next;
	}
	cout << endl;
}
int main()
{
	Node *node1 = new Node(10);
	Node *head = node1;
	Node *tail = node1;
	Insert_at_Head(head, 20);
	Insert_at_Head(head, 15);
	Insert_at_Head(head, 5);
	Insert_at_Head(head, 7);
	Insert_at_Head(head, 33);

	Print(head);
	cout<<"Now insering value at tail :-"<<endl;
	insert_At_Tail(tail,1);
	insert_At_Tail(tail,2);
	insert_At_Tail(tail,3);
	insert_At_Tail(tail,4);
	insert_At_Tail(tail,5);
	insert_At_Tail(tail,6);
	Print(head);
	insert_At_Position(head,500,1);
	Print(head);
	
	return 0;
}