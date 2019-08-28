#include <bits/stdc++.h>

using namespace std;

class Node{
public:
	int data;
	Node* next;
};

void PrintNode(Node* n){
	while(n!=NULL){
		cout<<n->data<<" ";
		n=n->next;
	}
	cout<<endl;
}

void AddatFront(Node **n,int ele){
Node * temp=new Node();
temp->data=ele;
temp->next=*n;
*n=temp;
}
void Addafter(Node *n,int ele){
	if(n==NULL){
		return;
	}
	Node* temp=new Node();//creating new node
    temp->data=ele; //putting data in new node

    temp->next=n->next;

    n->next=temp;

}
void deletenode(Node *n,int key){

Node* temp =new Node();
temp=n;
Node* prev =new Node();

  
    // If head node itself holds the key to be deleted 
    if (temp != NULL && temp->data == key) 
    { 
        n = temp->next;   // Changed head 
        free(temp);               // free old head 
        return; 
    } 
  
    // Search for the key to be deleted, keep track of the 
    // previous node as we need to change 'prev->next' 
    while (temp != NULL && temp->data != key) 
    { 
        prev = temp; 
        temp = temp->next; 
    } 
  
    // If key was not present in linked list 
    if (temp == NULL) return; 
  
    // Unlink the node from linked list 
    prev->next = temp->next; 
  
    free(temp);  // Free memory 

}

int main(){
	

	cout<<"Hello World"<<endl;
	cout<<"program first and second running"<<endl;

 
   Node* head;
   Node* second;
   Node* third;

   head=new Node();
   second=new Node();
   third=new Node();

   head->data=1;
   head->next =second;

   second->data=2;
   second->next=third;

   third->data=3;
   third->next=NULL;

   PrintNode(head);
  cout<<"root is "<<&head<<endl;
  AddatFront(&head,4);

  PrintNode(head);

   //add after second
  Addafter(second,5);
  	PrintNode(head);
Addafter(head,6);
PrintNode(head);

deletenode(head,2);
PrintNode(head);

deletenode(head,100);
PrintNode(head);
	return 0;

}
