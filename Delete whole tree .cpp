# Function to delte a tree

void _deleteTree(struct node* node)
{
    if (node == NULL) return;
    _deleteTree(node->left);
    _deleteTree(node->right);
    free(node);
}

# MAIN Function for deleting a tree 
void deleteTree(struct node* *node_ref)
{
  _deleteTree(*node_ref);
  # This is used because sometimes the root node should be equal to NULL
  *node_ref = NULL;
}
