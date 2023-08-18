    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> vrr;
        for(int i=0;i<n;i++)
        {
            int flag=1;
            for(int j=i;j<n;j++)
            {
                if(a[i]<a[j]){
                flag =0;
                break;
                }
                
                
            }
            if(flag==1)
            vrr.push_back(a[i]);
        }
        return vrr;
        
    }
};
