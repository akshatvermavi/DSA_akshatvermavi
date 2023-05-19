class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int lo = 1;
        int hi = 1e6;

        auto check = [&](int x){
            int ret = 0;
            for(auto a : nums){
                ret += (a + x - 1) / x;
            }
            return ret;
        };
        sort(begin(nums),end(nums));
        while(lo <= hi){
            int mid = (lo + hi) / 2;
            if(check(mid) > threshold){
                lo = mid + 1;
            }
            else{
                hi = mid - 1;
            }
        }

        return lo;
    }
};
