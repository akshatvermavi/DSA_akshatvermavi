class Solution {
public:
    void preorder(TreeNode* root,string& s){
        if(root==NULL) return;
        string temp=to_string(root->val);
        s+='(';
        s+=temp;
        if(root->left==NULL && root->right!=NULL) s+="()";
        preorder(root->left,s);
        preorder(root->right,s);
        s+=')';
    }

    string tree2str(TreeNode* root) {
        string ans="";
        preorder(root,ans);
        
        return ans.substr(1,ans.size()-2);
    }
};
