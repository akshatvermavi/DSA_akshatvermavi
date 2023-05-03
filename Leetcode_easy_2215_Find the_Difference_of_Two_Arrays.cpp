class Solution {
public:
//    bool f(vector<int>& vrr,int x )
//    {
//        for(int i=0;i<vrr.size();i++)
//        {
//            if(vrr[i]==x)
//            return 0;
//        }
//        return 1;
//    }
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        //using vector gives error;
        // vector<vector<int>> vrr;
        // vector<int> vrr1;
        // vector<int> vrr2;
        // for(int i=0;i<nums1.size();i++)
        // {
        //     for(int j=0;j<nums2.size();j++){
        //     if(nums1[i]!=nums2[j] && f(vrr1,nums2[j]))
        //     vrr1.push_back(nums2[j]);
        //     }

        // }
        // for(int i=0;i<nums2.size();i++)
        // {
        //     for(int j=0;j<nums1.size();j++){
        //     if(nums2[i]!=nums1[j] && f(vrr2,nums1[j]))
        //     vrr2.push_back(nums1[j]);
        //     }
        // }
        // vrr.push_back(vrr1);
        // vrr.push_back(vrr2);
        // return vrr;

        // using set gives perfect output

        // unordered_set<int> set1(nums1.begin(), nums1.end());
        // unordered_set<int> set2(nums2.begin(), nums2.end());
        
        // vector<int> distinct_nums1, distinct_nums2;
        // for (int num : set1) {
        //     if (set2.count(num) == 0) {
        //         distinct_nums1.push_back(num);
        //     }
        // }

        // for (int num : set2) {
        //     if (set1.count(num) == 0) {
        //         distinct_nums2.push_back(num);
        //     }
        // }

        // return {distinct_nums1, distinct_nums2};
        unordered_set<int> seta(nums1.begin(),nums1.end());
        unordered_set<int> setb(nums2.begin(),nums2.end());
        vector<int> vrr1, vrr2;
        for(auto i : seta)
        {
            if(setb.count(i)==0)
            {
                vrr1.push_back(i);
            }

        }
        for(auto i : setb)
        {
            if(seta.count(i)==0)
            {
                vrr2.push_back(i);
            }

        }
        return {vrr1, vrr2};

    }
};
