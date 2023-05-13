// class Solution {
// public:
//     int maxCoins(vector<int>& piles) {
//       int a =0, y=0, b=0;
//       int sum=0;
//       sort(piles.begin(),piles.end());
//       for(int i=piles.size() -2;i>=0;i-=3)
//       {
//           sum+=piles[i];
//       }  
//       return sum;
//     }
// };

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int i, j, max_coins=0;
        sort(piles.begin(), piles.end());
        for(i=0 ; i<piles.size()/3 ; i++)
        {
            max_coins += piles[piles.size()-(2*(i+1))];
        }
        return max_coins;
    }
};
