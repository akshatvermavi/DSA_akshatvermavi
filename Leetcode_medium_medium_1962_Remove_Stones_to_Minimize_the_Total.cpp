class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
       priority_queue<int> maxHeap;
       for(int i=0;i<piles.size();i++)
       {
           maxHeap.push(piles[i]);
       } 
       while(k--)
       {
           int maxElem = maxHeap.top();
           maxHeap.pop();
           maxElem = maxElem  - floor(maxElem/2);
            maxHeap.push(maxElem);
       }
       int sum =0;
       while(!maxHeap.empty())
       {
           int temp = maxHeap.top();
           maxHeap.pop();
           sum +=temp;
       }
       return sum;
    }
};
