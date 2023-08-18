// class Solution {
// public:
//     int maximalNetworkRank(int n, vector<vector<int>>& roads) {
//         vector<int> degree(n,0);
//         set<pair<int, int>> road_set;
//         for(auto & road: roads)
//         {
//             degree[road[0]]++;
//             degree[road[1]]++;
//             road_set.insert({road[0],road[1]});
//             road_set.insert({road[1],road[0]});

//         }
//         int max_rank =0;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 int rank = degree[i] + degree[j];
//                 if(road_set.find({i,j})!= road_set.end());
//                 rank--;
//                 max_rank = max(max_rank, rank);
//             }
            
//         }
//         return max_rank;
//     }
// };


class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int> degree(n, 0);
        set<pair<int, int>> road_set;
        
        for (auto& road : roads) {
            degree[road[0]]++;
            degree[road[1]]++;
            road_set.insert({road[0], road[1]});
            road_set.insert({road[1], road[0]});
        }

        int max_rank = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                int rank = degree[i] + degree[j];
                if (road_set.find({i, j}) != road_set.end()) {
                    rank--;
                }
                max_rank = max(max_rank, rank);
            }
        }

        return max_rank;
    }
};
