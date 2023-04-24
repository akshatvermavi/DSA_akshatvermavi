class Solution {
public:
    int dp[366];

    int help(int cd,vector<int>&days,set<int>&st,vector<int>&costs,int & total,int till){


        //understand each state of this recursive function
        //f(cd) will tell the minimum cost to travel from day cd to the last valid travelling day
        if(cd>days[days.size()-1]){
            total=min(total,till);
            return  0;
        }
      
        if(dp[cd]!=-1){
            return dp[cd];
        }
        int ans=INT_MAX;

        if(st.find(cd)==st.end()){
                ans=help(cd+1,days,st,costs,total,till);

        }else{
            int c1=costs[0]+help(cd+1,days,st,costs,total,till+costs[0]);
            int c2=costs[1]+help(cd+7,days,st,costs,total,till+costs[1]);
            int c3=costs[2]+help(cd+30,days,st,costs,total,till+costs[2]);
            ans =min({c1,c2,c3,ans});
        }
        return dp[cd]=ans;
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {

        //first we will be writing the recursive approach for this question 


        set<int>st;
        for(auto e:days){
            st.insert(e);
        }

        memset(dp,-1,sizeof(dp));


        //st will contain the valid days on which we need to travel
        int total=INT_MAX;
        return help(1,days,st,costs,total,0);
        return total;
        
    }
};
