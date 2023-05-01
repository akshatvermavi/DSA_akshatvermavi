class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        // vector<int> vrr;
        // while(candies!=0)
        // {
        //     int x = 1;
        //     if(candies !=0)
        //     vrr.push_back(x++);
        //     else
        //     vrr.push_back(0);
        //     num_people--;
        //     if(candies % num_people == 0 && num_people>0 )
        //     {
        //         x = candies / num_people; 
        //     }

        // }
        // return vrr;
           vector<int> res(num_people);
        for (int i = 0; candies > 0; ++i) {
            res[i % num_people] += min(candies, i + 1);
            candies -= i + 1;
        }
        return res;
    }
};

 
