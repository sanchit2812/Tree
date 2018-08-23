# Insertion of a node in a Binary Tree
#newNode(data ) is used to create a new node


void insertion(node * root, int value){
    queue <node *> q;
    if(!root){
        root = newNode(value);
        return;
    }
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(!(temp->left)){
            temp->left = newNode(value);
            return;
        }
        else q.push(temp->left);
        if(!(temp->right)){
            temp->right = newNode(value);
            return;
        }
        else q.push(temp->right);
    }
}
