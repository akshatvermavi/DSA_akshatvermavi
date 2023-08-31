/* Node is as follows:

struct Node
{
	int data, height;
	Node *left, *right;
	Node(int x)
	{
		data = x;
		height = 1;
		left = right = NULL;
	}
};

*/
//void inorder(Node* root, vector<int>&vrr)
// {
//     if(root==NULL) return;
//     inorder(root->left,vrr);
//     vrr.push_back(root->data);
//     inorder(root->right,vrr);
// }
// Node *buildTree(int data, vector<int>&vrr,int mid)
// {
//     // -1 data indicates that we have the leaf node (Base Case)
//     if (data == -1)
//     {
//         return NULL;
//     }
//     // Create the root node and hence solved 1 case
//     Node *root = new Node(data);
//     // Recursion will handle
//     if(mid-1>=0){
//     int leftData = vrr[mid-1];
//     root->left = buildTree(leftData, vrr,mid);
//     }
//     if(mid+1<vrr.size()){
//     int rightData= vrr[mid+1];
//     root->right = buildTree(rightData,vrr,mid);
//     }
    
//     return root;
// }
// Node* deleteNode(Node* root, int data)
// {
//     //add code here,
//     vector<int>vrr;
//     inorder(root,vrr);
//     Node *root;
//     int mid = vrr.size()/2;
//     int data = vrr[mid];
//     root = buildTree(data,vrr,mid);
//     return root;
    
// }

vector<Node*>curr;
void inorder(Node* root, int data)
{
    if(root==NULL) return;
    inorder(root->left,data);
    if(root->data!=data) curr.push_back(root);
    inorder(root->right,data);
}
Node* build(int i, int j)
{
    if(i>j) return NULL;
    int mid = (i+j)/2;
    Node* root = curr[mid];
    root->left = build(i,mid-1);
    root->right = build(mid+1,j);
    return root;
}
Node* deleteNode(Node* root, int data)
{
    //add code here,
    
    curr.clear();
    inorder(root,data);
    int i=0;
    int j = curr.size()-1;
    return build(i,j);
}
