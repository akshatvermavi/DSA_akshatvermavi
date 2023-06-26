/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int kthSmallest(TreeNode* root, int& k) {
        //base case
        if(root==NULL)
            return -1; // -1 reflects base case
        //inorder
        //left
        int lans= kthSmallest(root->left,k);
        if(lans!=-1)
            return lans;
        //n->root
        k--;
        if(k==0)
            return root->val;
        
        //right
        int rans = kthSmallest(root->right , k);
        return rans;
    }
};
