# Find the maximum value of a node in a Binary tree through recursion 


int findmax(struct node* root){
    int root_val, left, right, mx= INT_MIN;
    if(root!=NULL){
        root_val = root->data;
        left = findmax(root->left);
        right = findmax(root->right);
        mx = max( root_val,max(left, right));
    }
    return mx;
}
