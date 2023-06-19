class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int>vrr(n+1,0);
        int sum =0;
        vrr[0] =0;
        //int j=0;
        for(int j=0;j<gain.size();j++)
        {
        
            sum+=gain[j];
            vrr[j+1] = sum;
        }
        sort(vrr.begin(),vrr.end());
        return vrr[n];
    }
};
