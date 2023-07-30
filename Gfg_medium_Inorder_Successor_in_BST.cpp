class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        //Your code here
        if(root ==NULL)
        return NULL;
        Node* succ = NULL;
        while(root){
            if(root->data <= x->data)
            root = root->right;
            else{
                succ = root;
                root=root->left;
                
            }
        }
        return succ;
    }
};
