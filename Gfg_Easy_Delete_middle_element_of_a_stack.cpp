class Solution
{
    public:
    //Function to delete middle element of a stack.
    // void deleteMid(stack<int>&s, int sizeOfStack)
    // {
    //     // code here.. 
    //     int mid = ceil((sizeOfStack)/2);
    //     vector<int>v;
    //     while(!s.empty()){
    //     v.push_back(s.top());
    //         v.push_back(s.top());
    //         s.pop();
            
    //     }
    //     int vsize = v.sizeOfStack();
    //     for(int i= vsize-1;i>=0;i--)
    //     {
    //         if(i==mid)
    //         Continue;
    //         s.push(v[i]);
    //     }
    // }
    
    void deleteMid(stack<int>&s, int size)
    {
        int mid = ceil((size)/2);
        vector<int> v;
        
        while(!s.empty()){
            v.push_back(s.top());
            s.pop();
        }
        
        int vsize = v.size();
        for(int i=vsize-1; i>=0; i--){
            if(i==mid){
                continue;
            }
            s.push(v[i]);
        }
    }
};
