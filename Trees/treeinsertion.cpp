#include<bits/stdc++.h>

using namespace std;


struct Node{

   int data;
   Node* left;
   Node* right;
};

Node* getnewnode(int x){
	Node* newnode= new Node();
	newnode->data=x;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
Node* insert(Node* root,int x){
	if(root==NULL){
		root=getnewnode(x);
	}
	else if(x<=root->data){
		root->left=insert(root->left,x);
	}
	else {
		root->right=insert(root->right,x);
	}
	return root;
}

bool search(Node* root,int data){
	if(root==NULL)return false;
	if(root->data=data)return true;
	else if(data<=root->data){
        search(root->left,data);
	}
	else{
		search(root->right,data);
	}

	return false;
}
int main(){
 	Node* root;
 	root=NULL;
 	root=insert(root,2);
 	root=insert(root,3);
 	root=insert(root,4);
 	root=insert(root,5);
 	root=insert(root,6);
 	cout<<"enter any no";
     int n;
     cin>>n;
     if(search(root,n)){
     	cout<<"YES";
     }
     else{
     	cout<<"NO";
     }

	return 0;
}
