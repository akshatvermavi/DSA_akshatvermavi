class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>pque;
    int szi;
    KthLargest(int k, vector<int>& nums) {
        szi =k;
        for(int i=0;i<nums.size();i++)
        {
            pque.push(nums[i]);
        }

    }
    
    int add(int val) {
        pque.push(val);
        while(pque.size()>szi)
        {
            pque.pop();
        }
        return pque.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
