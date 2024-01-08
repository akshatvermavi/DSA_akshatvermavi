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
// class Solution {
// public:
//     void inorder(vector<int>&vrr, TreeNode* root)
//     {
//         if(root == NULL)return;
//         inorder(vrr, root->left);
//         vrr.push_back(root->val);
//         inorder(vrr, root->right);
//     }
//     int rangeSumBST(TreeNode* root, int low, int high) {
//        vector<int>vrr;
//        int sum =0;
//        inorder(vrr,root); 
//        for(int i=0;i<vrr.size();i++)
//        {
//            if(vrr[i]>=low && vrr[i]<=high)
//            {
//                sum+=vrr[i];
//            }
//        }
//        return sum;
//     }
// };

class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root) return 0;
        int currval = (root->val >= low && root->val <= high) ? root->val :0;
        int leftSum = rangeSumBST(root->left, low, high);
        int rightSum = rangeSumBST(root->right, low, high);
        return currval + leftSum + rightSum;
    }
};
