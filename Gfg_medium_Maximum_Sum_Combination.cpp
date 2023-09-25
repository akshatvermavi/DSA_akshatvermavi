class Solution {
  public:
    vector<int> maxCombinations(int n, int k, vector<int> &a, vector<int> &b) {
        // code here
        // vector<int>vrr;
        // for(int i=0;i<N;i++)
        // {
        //     for(int j=0;j<N;j++)
        //     {
        //         vrr.push_back(A[i]+A[j]);
        //     }
        // }
        // sort(vrr.begin(),vrr.end());
        // vector<int>arr;
        // for(int i=0;i<k;i++)
        // {
        //     arr.push_back(vrr[vrr.size() - i - 1]);
        // }
        // return arr;
        
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        // create a priority queue of max heap
        priority_queue<int> pq;
        
        for(int i = n-1 ; i >= 0 ; i--){
            for(int j = n-1 ; j >= 0 ; j--){
                // insert a negative element for mean heap
                int sum = (a[i] + b[j]) * -1;
                if(pq.size() < k){
                    pq.push(sum);
                }else if(sum < pq.top()){
                    pq.pop();
                    pq.push(sum);
                }else break;
            }
        }
       // create a vector of size k
        vector<int> result(k--);

        // geting value in vector
        while(!pq.empty()){
            // make value positive at their position
            result[k--] = pq.top()*-1;
            pq.pop();
        }
        
        return result;
    }
};
