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
 // Method 01 not working give compilation error
 
// class Solution {
// public:
// void find(Node* root, int level, int &maxLevel, int &res)
// {
//     if (root != NULL)
//     {
//         find(root->left, ++level, maxLevel, res);
 
//         // Update level and rescue
//         if (level > maxLevel)
//         {
//             res = root->data;
//             maxLevel = level;
//         }
 
//         find(root->right, level, maxLevel, res);
//     }
// }
 
// // Returns value of deepest node
// int deepestNode(Node *root)
// {
//     // Initialize result and max level
//     int res = -1;
//     int maxLevel = -1;
 
//     // Updates value "res" and "maxLevel"
//     // Note that res and maxLen are passed
//     // by reference.
//     find(root, 0, maxLevel, res);
//     return res;
// }
//     int deepestLeavesSum(Node* root) {
//         int sum =0;
//         sum = sum+  deepestNode(root);
//         return sum;
//     }
// };

#include<numeric>
class Solution {
public:
    int Treeheight(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        return 1+max(Treeheight(root->left),Treeheight(root->right));
    }
    void buildDeepNodes(TreeNode* root,int depth,vector<int>& deepNodes,int height){
        if(root==nullptr){
            return;
        }
        depth+=1;
        if(depth==height){
            deepNodes.push_back(root->val);
        }
        buildDeepNodes(root->left,depth,deepNodes,height);
        buildDeepNodes(root->right,depth,deepNodes,height);
    }
    int deepestLeavesSum(TreeNode* root) {
        vector<int> deepNodes;
        int depth=0;
        int height=Treeheight(root);
        buildDeepNodes(root,depth,deepNodes,height);
        return accumulate(deepNodes.begin(),deepNodes.end(),0);
    }
};
