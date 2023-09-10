class Solution
{
    // private:
    // void inorder(Node* node,vector<int>&vrr)
    // {
    //     if(node ==NULL)return;
    //     inorder(node->left,vrr);
    //     vrr.push_back(node->data);
    //     inorder(node->right,vrr);
    // }
    // Node* bstUsingInorder(vector<int>&vrr,int s, int e)
    // {
       
    //     if(s>e){
    //     return NULL;
    //     }
 
    // int mid = s + (e-s)/2;
    // int element = vrr[mid];
    // Node* root = new Node(element);
    // root->left = bstUsingInorder(vrr, s,mid-1);
    // root->right = bstUsingInorder(vrr, mid+1, e);
    // return root;
    // }
    public:
        Node* insert(Node* node, int data) {
        
            // Your code goes here
        // vector<int>vrr;
        // inorder(node,vrr);
        // int flag=0;
        // for(int i=0;i<vrr.size();i++){
        // if(vrr[i]==data){
        //     flag =1;
        //     return node;
        // }
        // }
        // if(flag==0){
        // vrr.push_back(data);
        // sort(vrr.begin(),vrr.end());
        // }
        // bstUsingInorder(vrr,0, vrr.size()-1);
        // return node;
            Node* ans = new Node(data);
            if(node == NULL)
                return ans;
            Node* temp = node;
            Node* prev = node;
            while(temp!= NULL){
                if(temp->data == data)
                    return node;
                else if(temp->data > data){
                    prev = temp;
                    temp = temp->left;
                }
                else{
                    prev = temp;
                    temp = temp->right;
                }
            }
            if(prev->data > data){
                prev->left = ans;
            }
            else{
                prev->right = ans;
            }
            return node;
    }

};
