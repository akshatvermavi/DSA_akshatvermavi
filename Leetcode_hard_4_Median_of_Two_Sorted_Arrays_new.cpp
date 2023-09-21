class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double mid;
        vector<int>vrr;
        for(int i=0;i<nums1.size();i++)
        {
          vrr.push_back(nums1[i]);

        }
        for(int i=0;i<nums2.size();i++)
        {
          vrr.push_back(nums2[i]);
        }
        sort(vrr.begin(),vrr.end());
        if(vrr.size()%2==1)
        {
          mid =  vrr[vrr.size()/2];
        }
        else mid = (vrr[(vrr.size()-1)/2] + vrr[vrr.size()/2])/2.0;
        return mid;
    }
};
