# for a tree : 

       1
      / \
     2    3
    / \   /\
   4   5 6  7
   #ZIGZAG traversal :: 1324567.
 
void zigzag(node* root){
    if(!root) return ;
    stack <node*> s,t;
    s.push(root);
    node* temp;
    int flag=1;
    while(!s.empty()){
        temp = s.top();
        s.pop();
        if(temp){
            cout<<temp->data<<" ";
            if(flag){
                if(temp->left) t.push(temp->left);
                if(temp->right) t.push(temp->right);
            }
            else{
                if(temp->right) t.push(temp->right);
                if(temp->left) t.push(temp->left);
            }
        }
        if(s.empty()){
            swap(s,t);
            flag?flag=0:flag=1;
        }
    }
}
