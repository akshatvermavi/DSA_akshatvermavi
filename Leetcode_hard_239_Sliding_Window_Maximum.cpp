class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;
        // first window of k size
        for(int i=0;i<k;i++)
        {
            //chote elem remove krdo
            while(!dq.empty() && nums[i]>=nums[dq.back()] )
            {
                dq.pop_back();
            }
            // inserting index, so that we can checkout of window elem
            dq.push_back(i);
        }
        // store ans for first window
        ans.push_back(nums[dq.front()]);
        // remaining window ko process
        for(int i=k;i<nums.size();i++)
        {
            // out of window elem ko remove krdiya
            if(!dq.empty() && i-dq.front()>=k)
            {
                dq.pop_front();
 
            }
            // ab firse current elem k liye chotte elem ko remove krna h
             while(!dq.empty() && nums[i]>=nums[dq.back()] )
            {
                dq.pop_back();
            }
            dq.push_back(i);
            // current window ke ans store krne h
            ans.push_back(nums[dq.front()]);
        }
        return ans;


    }
};
