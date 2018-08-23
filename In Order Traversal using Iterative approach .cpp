# In Order Traversal using Iterative approach :: 

void inOrderIterative(struct node *root){
    struct Stack *s = createstack(100);
    while(1){
        while(root){
            push(s,root);
            root = root->left;
        }
        if(isEmpty(s)) return ;
        root = pop(s);
        cout<<root->data;
        root = root->right;
    }
}
