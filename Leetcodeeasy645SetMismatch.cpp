class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int sum = (n * (n + 1))/2;
        long long sqr_sum = 0;
        for(int i = 1; i <= n; i++) sqr_sum += i * i;

        int arr_sum = 0;
        long long arr_sqr_sum = 0;

        for(int i = 0; i < n; i++){
            arr_sum += nums[i];
            arr_sqr_sum += (nums[i] * nums[i]);
        }

        int sum_diff = arr_sum - sum;
        int sqr_sum_diff = arr_sqr_sum - sqr_sum;

        int missing = (sqr_sum_diff - (sum_diff * sum_diff)) / (2 * sum_diff);
        int duplicate = sum_diff + (missing);
        return {duplicate , missing};
    }
};
