class Solution{
  public:
    vector <int> verticalSum(Node *root) {
        
             map<int,map<int,vector<int>>> nodes;
        queue<pair<Node*,pair<int,int>>>q;
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        int sum;
        q.push(make_pair(root,make_pair(0,0)));
        while(!q.empty()){
            pair<Node*,pair<int,int>>temp=q.front();
            q.pop();
            Node*frontnode=temp.first;
            int hd=temp.second.first;
            int lvl=temp.second.second;
            
            nodes[hd][lvl].push_back(frontnode->data);
            if(frontnode->left){
          q.push(make_pair(frontnode->left,make_pair(hd-1,lvl+1)));
            }
            if(frontnode->right){
          q.push(make_pair(frontnode->right,make_pair(hd+1,lvl+1)));
            }
            
        }
        for(auto i:nodes){
                sum=0;
            for(auto j:i.second){
            
                for(auto k:j.second){
                    sum+=k;
                }
               
            }
             ans.push_back(sum);
            
        }
        return ans;
        
    
    }
};
