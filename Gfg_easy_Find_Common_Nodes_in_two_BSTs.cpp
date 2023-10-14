class Solution
{
    public:
    //Function to find the nodes that are common in both BST. 
    void inorder(Node* root, vector<int>&vrr)
    {
        if(root == NULL)return;
        inorder(root->left, vrr);
        vrr.push_back(root->data);
        inorder(root->right, vrr);
        
    }
    vector <int> findCommon(Node *root1, Node *root2)
    {
     //Your code here
     vector<int>vrr1;
     vector<int>vrr2;
     inorder(root1, vrr1);
     inorder(root2,vrr2);
     vector<int>vrr3;
    //  for(int i=0;i<vrr1.size();i++)
    //  {
    //      for(int j=0;j<vrr2.size();j++)
    //      {
    //          if(vrr1[i]==vrr2[j])
    //          vrr3.push_back(vrr1[i]);
    //      }
    //  }
    //  return vrr3;
     
    // sort(vrr1.begin(), vrr1.end());
    // sort(vrr2.begin(), vrr2.end());

    set_intersection(vrr1.begin(),vrr1.end(),
                          vrr2.begin(),vrr2.end(),
                          back_inserter(vrr3));
    return vrr3;
    }
};
