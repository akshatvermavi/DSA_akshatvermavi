class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
         int sum = 0;
        
        unordered_set<int>st;
        
        for(int i = 0; i < n; i++){
            
            sum += arr[i];
            
            if(sum == 0)    return true;
            
            else if(st.find(sum) != st.end())   return true;
            
            st.insert(sum);
            
        }
        
        return false;
    }
};
