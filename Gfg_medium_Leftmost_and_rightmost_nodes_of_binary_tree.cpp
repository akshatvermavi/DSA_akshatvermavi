// void inorder(Node* root, vector<int>&nums)
// {
//     if(root==NULL)return;
//     inorder(root->left, nums);
//     nums.push_back(root->data);
//     inorder(root->right,nums);
// }
void printCorner(Node *root)
{

// Your code goes here
    // vector<int>nums;
    // inorder(root,nums);
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        int n = q.size();
        for(int i=1;i<=n;i++)
        {
            Node* temp = q.front();
            q.pop();
            if(i==1 || i==n) cout<<temp->data<<" ";
            if(temp->left!=NULL) q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);
        }
    }
}
