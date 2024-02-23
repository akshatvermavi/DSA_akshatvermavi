class Solution {
public:
    unordered_map<int,vector<pair<int,int>>> network;
    int res = 10000000;
    vector<int> min_price;//min price for each city

    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        //converting the flights to a hash map
        for (int i=0; i< flights.size();i++){
            if (network.find(flights[i][0]) == network.end()){
                vector<pair<int,int>> v;
                pair<int,int> p= {flights[i][1],flights[i][2]}; //destination & price
                v.emplace_back(p);
                network.emplace(flights[i][0],v);
            } else{
                pair<int,int> p= {flights[i][1],flights[i][2]}; //destination & price
                network[flights[i][0]].emplace_back(p);
            }

        }
        for (int i=0; i< n; i++){
            min_price.push_back(10000000);
        }
        min_price[src] = 0;//the cost to reach src city is 0
        queue<tuple<int,int,int>> q; //city, stop, price
        tuple<int,int,int> t0 = make_tuple(src,0,0);
        q.push(t0) ;
        int stop =0;
        while (!q.empty() && stop <=k){
            int size = q.size();
            while (size){//explore the graph layer by layer
                int cur_city = get<0>(q.front());
                int cur_stop = get<1>(q.front());
                int cur_price = get<2>(q.front());
                if(cur_price>= res){// not consider this route
                    q.pop();
                    size--;
                    continue;
                }
                for (int i=0; i<network[cur_city].size();i++){
                    int next_city = network[cur_city][i].first;
                    int next_cost = network[cur_city][i].second;
                    int newcost = cur_price + next_cost;
                    if (newcost < min_price[next_city]){
                        //only consider visiting next city when the cost is lower than current min cost with fewer or same amount of stops
                        min_price[next_city] = newcost;
                        tuple t = make_tuple(next_city,stop+1,newcost);
                        q.push(t);
                        if(next_city == dst){
                            res = min(res,newcost);
                        }
                    }
                }
                q.pop();
                size--;
            }
            stop++;
        }
        if (res == 10000000){
            return -1;
        }
        return res;
    }
};
