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
//     void inorder(TreeNode* root,vector<int>&vrr)
//     {
//         if(root==NULL)return;
//         inorder(root->left,vrr);
//         vrr.push_back(root->val);
//         inorder(root->right,vrr);

//     }
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//        vector<int>vrr1;
//        vector<int>vrr2;
//        inorder(p,vrr1);
//        inorder(q,vrr2); 
//        int n1=vrr1.size();
//        int n2=vrr2.size();
//        if(n1!=n2)return false;
      
//        for(int i=0;i<vrr1.size();i++)
//        {
//            if(vrr1[i]!=vrr2[i])return false;
//        }
//        return true;
//     }
// };


class Solution {
public:
    bool check(TreeNode *p, TreeNode *q){
        if(p == NULL and q == NULL) return true;
        if((p == NULL and q != NULL) or (p != NULL and q == NULL)) return false;
        if(p->val != q->val) return false;
        return check(p->left,q->left) && check(p->right, q->right);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        return check(p, q);
    }
};

// class Solution {
// public:
//     void inorder(TreeNode* root, vector<int>&vrr)
//     {
//         if(root==NULL)return;
//         inorder(root->left,vrr);
//         vrr.push_back(root->val);
//         inorder(root->right,vrr);
//     }
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         vector<int>vrr1;
//         vector<int>vrr2;
//         inorder(p,vrr1);
//         inorder(q,vrr2);
//         if(vrr1.size()!=vrr2.size())
//         return false;
//         for(int i=0;i<vrr1.size();i++)
//         {
//             if(vrr1[i]!=vrr2[i])return false;
//         }
//         return true;
//     }
// };
