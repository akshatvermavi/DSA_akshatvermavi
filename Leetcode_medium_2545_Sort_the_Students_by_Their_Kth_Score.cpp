class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        for(auto &r : score) r.insert(r.begin(), r[k]);
        sort(score.begin(), score.end(), greater<vector<int>>());
        for(auto &r : score) r.erase(r.begin());
        return score;
        // visit once in priority queue approach
        // priority_queue<pair<int, int>> pq;
        // for(int i=0;i<score.size();i++)
        // {
        //     pq.push((score[i][k], i));
        // }
       
        // vector<vector<int>> vrr;
        // while(!pq.empty)
        // {
        //     auto x = pq.top();
        //     pq.pop();
        //     vrr.push_back(scores[x.second]);
        // }
        // return vrr;
    }
};
