vector<int> iterativepreorder(Node* root){
	vector<int> ans;
    stack<Node*> s;
    while(true){
        
        while(A){
            s.push(A);
            ans.push_back(A->val);
            A=A->left;
        }
        
        if(s.empty()){
            break;
        }
        A=s.top();
        s.pop();
        A=A->right;
    }
    
    return ans;
}
