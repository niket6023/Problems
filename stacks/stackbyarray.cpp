#include<bits/stdc++.h>

using namespace std;


#define MAX 1000 
  
class Stack { 
    int top; 
  
public: 
    int a[MAX]; // Maximum size of Stack 
    Stack() { top = -1; } 
    bool push(int x); 
    bool pop(); 
    int peek(); 
    bool isEmpty(); 
}; 

bool Stack::push(int x){
	if(top>MAX-1){
		cout<<"overflow";
     return false;
	}
	else{
	top++;
	a[top]=x;
	return true;
}
}
int Stack::peek() 
{ 
    if (top < 0) { 
        cout << "Stack is Empty"; 
        return 0; 
    } 
    else { 
        int x = a[top]; 
        return x; 
    } 
}
bool Stack::pop(){
	if(top==-1){
		cout<<"underflow";
     return false;
	}
	else{
	top--;
	return true;
}
}
int main(){
    
     Stack s;
     s.push(4);
     s.peek();			
     s.pop();

	return 0;
}
