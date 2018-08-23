# Post Order Traversal through Iterative Approach ::
void postOrderIterative(struct node* root){
    struct Stack *s = createstack(100 );
    struct node *previous = NULL;

    do{
        while(root){
            push(s,root);
            root = root->left;
        }
        while(root== NULL && !isEmpty(s)){
            root = s->array[s->top];
            if(root->right == NULL || root->right == previous){
                cout<<root->data;
                pop(s);
                previous= root;
                root = NULL;
            }
            else root = root->right;
        }
    }while(!isEmpty(s));
    return;
}
