# Preorder Traversal using Iterative approach ::

void preOrderIterative(struct node *root){

    struct Stack *s=createstack(100);
    while(1){
        while(root){
            cout<<root->data;
            push(s,root);
            root = root->left;
        }
        if(isEmpty(s)) break;
        root = pop(s);
        root = root->right;
    }
}
