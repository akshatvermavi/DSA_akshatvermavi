class Solution{
    public:
    void convertToWave(int n, vector<int>& arr){
        
 if(n==1){
            return;
        }
        
        int i=0;
        int j=1;
        
        
        while(i<n-1){
            swap(arr[i],arr[j]);
            
            i=i+2;
            j=j+2;
        }
        
        
        
    }
};
