class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // kitna petrol kam hai
        int deficit =0;
        // kitn petrol bacha hua hau
        int balance =0;
        //ckt kha se start krna hai
        int start =0;
        for(int i=0;i<gas.size();i++)
        {
            balance+= gas[i] - cost[i];
            if(balance<0){
            deficit += abs(balance);
            start =i+1;
            balance =0;
            }

        }
        // start ke and ans store hai
        if(balance>=deficit )
        return start;
        else 
        return -1;
    }
};
