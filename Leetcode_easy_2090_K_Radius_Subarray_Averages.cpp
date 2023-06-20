// class Solution {
// public:
//     vector<int> getAverages(vector<int>& nums, int k) {
//         int n =  nums.size();
//        vector<int> vrr(n);
//        if(k==0)
//        return nums;
       
       
//        for(int i=k;i<n-k;i++)
//        {
//            int sum =0;
//            for(int j = i-k;j<=i+k;j++)
//            {
//                sum = sum+nums[j];
//            }
//            vrr[i]= sum/(n-k+1);
//        }
//        int s =0,e=n-1;
//        while(s<=k-1 && e>=n-k){
//            vrr[s++]=-1;
//            vrr[e--]=-1;
           
//        }
//        return vrr;
//     }
// };

class Solution {
public:
vector<int> getAverages(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int>ans(n);
        
        vector<long long>pref(n);
        pref[0] = arr[0];
        for (int i = 1; i < n; i++)
            pref[i] = pref[i - 1] + arr[i];
        
        for (int i = 0; i < n; i++)
        {
            int lcnt = i;
            int rcnt = n - i - 1;
            if (lcnt >= k and rcnt >= k)
            {
                long long lsum = 0;
                long long rsum = pref[i + k];
                
                if (i - k > 0)
                    lsum = pref[i - k - 1];
                    
                ans[i] = (rsum - lsum) / (2*k + 1);
            }
            else
                ans[i] = -1;
        }
        
        return ans;
    }
};
