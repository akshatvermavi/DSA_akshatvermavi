bool func(Node* root, int k, int node)
{
    queue<Node*> q;
    q.push(root);
    int temp = k+1;
    vector<int> v;
    while(q.size() && temp--)
    {
        int n = q.size();
        for(int i = 0; i < n; i++)
        {
            Node* num = q.front();
            q.pop();
            if(!temp) v.push_back(num->data);
            if(num->left) q.push(num->left);
            if(num->right) q.push(num->right);
        }
    }
    for(auto i : v)
        if(i == node) return true;
    return false;
}
int kthAncestor(Node *root, int k, int node)
{
    queue<Node*> q;
    q.push(root);
    bool val;
    while(q.size())
    {
        for(int i = 0; i < q.size(); i++)
        {
            Node* num = q.front();
            q.pop();
            if(num->left) q.push(num->left);
            if(num->right) q.push(num->right);
            if(num->left == NULL && num->right == NULL) continue;
            val = func(num, k, node);
            if(val == true) return num->data;
        }
    }
    return -1;
}
