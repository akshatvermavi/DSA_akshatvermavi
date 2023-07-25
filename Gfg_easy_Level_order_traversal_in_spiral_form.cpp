vector<int> findSpiral(Node *root)
{
    //Your code here
     vector<int> res;
    if(root==NULL) return res;
    queue<Node*> q;
    q.push(root);
    bool even=true;
    while(!q.empty()){
        int size=q.size();
        vector<int> ans(size);
        
        for(int i=0;i<size;i++){
            Node* cur=q.front();
            q.pop();
            int idx=even?size-i-1:i;
            ans[idx]=cur->data;
            if(cur->left)   q.push(cur->left);
            if(cur->right)  q.push(cur->right);
        }
            even=!even;
            for(auto i:ans) res.push_back(i);
    }
    
    return res;
    }
