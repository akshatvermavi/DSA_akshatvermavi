// class Solution {
// public:
//     long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
//      int n1 = nums1.size();
//      int n2 = nums2.size();
//      sort(nums1.begin(),nums1.end());
//      sort(nums2.begin(),nums2.end());
//      int mx =0;
//      while(k!=0)
//      {
//          mx+=nums1[n1-k-1];
//          k--;
         
//      }
//      int maxi =0;
    
//      maxi = nums2[n2-1-k];

    
//      int prod = mx*maxi;
//      return prod;

//     }
// };

class Solution {
public:
    long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size();
        vector<vector<int>> pairs(n, vector<int>(2));
        for (int i = 0; i < n; i++) {
            pairs[i][0] = nums2[i];
            pairs[i][1] = nums1[i];
        }
        sort(pairs.begin(), pairs.end(), [](const vector<int>& a, const vector<int>& b) {
            return b[0] < a[0];
        });
        priority_queue<int, vector<int>, greater<int>> pq;
        long res = 0, totalSum = 0;
        for (const vector<int>& pair : pairs) {
            pq.push(pair[1]);
            totalSum += pair[1];
            if (pq.size() > k) {
                totalSum -= pq.top();
                pq.pop();
            }
            if (pq.size() == k) {
                res = max(res, totalSum * pair[0]);
            }
        }
        return res;
    }
};
