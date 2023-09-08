
class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
     void buildtree(Node* root,vector<int>& vrr, int &i)
    {
        if(root==NULL)return;
        buildtree(root->left,vrr,i);
        root->data = vrr[i++];
        buildtree(root->right,vrr,i);
        
    }
    void inorder(Node* root, vector<int>&vrr)
    {
        if(root==NULL)return;
        inorder(root->left,vrr);
        vrr.push_back(root->data);
        inorder(root->right,vrr);
    }
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector<int>vrr;
        inorder(root,vrr);
        sort(vrr.begin(),vrr.end());
        int i=0;
        buildtree(root,vrr,i);
        return root;
    }
};
