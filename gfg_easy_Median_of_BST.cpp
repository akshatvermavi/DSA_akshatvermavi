void inOrder(Node* root, vector<int> &arr){
    if(root){
        inOrder(root->left, arr);
        arr.push_back(root->data);
        inOrder(root->right, arr);
    }
}
float findMedian(struct Node *root)
{
      //Code here
      vector<int> arr;
      inOrder(root, arr);
      int n = arr.size();
      int mid = n/2;
      float median = n%2 == 1 ? arr[mid] : (arr[mid-1]+arr[mid])/2.0;
      return median;
}
