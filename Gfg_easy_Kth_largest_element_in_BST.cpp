class Solution
{
    private:
    void inorder(Node* root,vector<int>&vrr)
    {
        if(root==NULL)return;
        inorder(root->left,vrr);
        vrr.push_back(root->data);
        inorder(root->right,vrr);
    }
    public:
    int kthLargest(Node *root, int K)
    {
        //Your code here\
        
        vector<int>vrr;
        inorder(root,vrr);
        // if(K<vrr.size()) return vrr[vrr.size() - K];
        // return -1;
        return vrr[vrr.size() - K];
    }
};
