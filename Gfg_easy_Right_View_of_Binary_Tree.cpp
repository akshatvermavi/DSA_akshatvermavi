class Solution
{
    private:
    void solve(Node* root, vector<int>& ls, int level)
    {
        if(root==NULL)
            return;
        if(level == ls.size())
            ls.push_back(root->data);
        solve(root->right,ls, level+1);
        solve(root->left,ls, level+1);
    }
    
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int>ls;
       int level = 0;
       solve(root, ls, level);
       return ls;
       
    }
};
