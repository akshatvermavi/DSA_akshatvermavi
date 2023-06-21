// class Solution {
// public:
//     long long minCost(vector<int>& nums, vector<int>& cost) {
//         long long n = nums.size();
//         long long c = cost.size();
//         long long sum =0;
//         vector<int> vrr(n,0);
//         for(int i=0;i<nums.size();i++)
//         {
//             sum+=nums[i];
//         }
//         long long avg = sum/n;
//         for(int i=0;i<n;i++)
//         {
//             int sm =0;
//             int count =0;
//             if(nums[i]<avg){
//             while(nums[i]<avg)
//             {
                
//                 nums[i]++;
//                 count++;
                
//             }
//             sm=cost[i]*count;
//             vrr.push_back(sm);
//             sm=0;
//             }
//             else if(nums[i]>avg)
//             {
//                 int sm =0;
//                 int count =0;
//                 while(nums[i]>avg)
//                 {
//                     nums[i]--;
//                     count++;
//                 }
//                 sm= cost[i]*count;
//                 vrr.push_back(sm);
//             }

//         }
//         long long summ=0;
//         for(int i=0;i<vrr.size();i++)
//         {
//             summ+=vrr[i];
//         }
//         return sum;
//     }
// };

class Solution {
public:

    long long calc(vector<int>&nums, vector<int>& cost, long long median){

        long long ans = 0;

         for(int i=0;i<nums.size();i++)
           ans += abs(1ll*nums[i]-median)*(1ll*cost[i]);

         return ans;  
    }

    long long minCost(vector<int>& nums, vector<int>& cost) {

        long long tot = 0;
        long long sum = 0;
        int n = nums.size();

        vector<pair<int,int>> vec;

        for(int i=0;i<nums.size();i++)
            vec.push_back({nums[i],cost[i]});

        sort(vec.begin(),vec.end());

        for(int i=0;i<n;i++)
        sum += vec[i].second;

        long long median;
        int i=0;

        while(tot < (sum+1)/2 && i<n){

             tot += 1ll*vec[i].second;
             median = vec[i].first;
             i++;
        }    
        
        
        return calc(nums,cost,median);
    }
};
