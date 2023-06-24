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
    void solve(TreeNode* root, int targetsum, int currsum, vector<int> path, vector<vector<int>>&ans){
         if(root==NULL)
         return;
         if(root->left==NULL && root->right==NULL)
         {
             path.push_back(root->val);
             currsum += root->val;
             if(currsum ==targetsum)
             ans.push_back(path);
             return;
         }
         path.push_back(root->val);
         currsum += root->val;
         solve(root->left, targetsum, currsum, path, ans);
         solve(root->right, targetsum,currsum, path, ans);
         

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       vector<vector<int>>ans;
       int sum =0;
       vector<int> temp;
       solve(root, targetSum,sum,temp,ans);
       return ans;   
    }
}; 
