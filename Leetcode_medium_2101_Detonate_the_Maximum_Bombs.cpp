// class Solution {
// public:
//     int maximumDetonation(vector<vector<int>>& bombs) {
//     //    int x = bombs.size();
//     //    int y = bombs[0].size();
//     //    int count =1;
//     //    for(int i=0;i<x-1;i++)
//     //    {
//     //            long long a = abs(bombs[i][0] - bombs[i+1][0]);
//     //            long long b = abs(bombs[i][1] - bombs[i+1][1]);
//     //            double c = bombs[i][2] + bombs[i+1][2];
//     //            long long e = pow(a,2) + pow(b,2);
//     //            double d = sqrt(e);
//     //            if(d<=c)
//     //            count++;

        
//     //    }
//     //     return count;


//         int x = bombs.size();
//         int count = 1;
        
//         for (int i = 0; i < x - 1; i++) {
//             int a = bombs[i][0] - bombs[i + 1][0];
//             int b = bombs[i][1] - bombs[i + 1][1];
//             double c = bombs[i][2] + bombs[i + 1][2];
//             int e = pow(a, 2) + pow(b, 2);
//             double d = sqrt(e);
            
//             if (d <= c) {
//                 count++;
//             }
//         }
        
//         return count;
//     }
// };

class Solution {
public:
    int maximumDetonation(vector<vector<int>>& bombs) {
        int n = bombs.size();
        int maxBombs = 0;
        unordered_map<int, vector<int>> graph;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    continue;
                }
                if (pow(bombs[i][2], 2) >= pow(bombs[i][0] - bombs[j][0], 2) + pow(bombs[i][1] - bombs[j][1], 2)) {
                    graph[i].push_back(j);
                }
            }
        }

        for (int i = 0; i < n; i++) {
            unordered_set<int> visited;
            visited.insert(i);
            dfs(i, visited, graph);
            maxBombs = max(maxBombs, static_cast<int>(visited.size()));
        }

        return maxBombs;
    }

private:
    void dfs(int node, unordered_set<int>& visited, unordered_map<int, vector<int>>& graph) {
        vector<int>& neighbors = graph[node];
        for (int child : neighbors) {
            if (visited.find(child) == visited.end()) {
                visited.insert(child);
                dfs(child, visited, graph);
            }
        }
    }
};
