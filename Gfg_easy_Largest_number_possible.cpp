class Solution{
private:
    // int isSum(int x)
    // {
    //     int sum =0;
    //     while(x>0)
    //     {
    //         sum+=x%10;
    //         x = x/10;
    //     }
    //     return sum;
    // }
public:
    string findLargest(int N, int S){
        // code here
        // int maxi = INT_MIN;
        // int p = pow(10,N+1);
        // for(int i=0;i<p;i++)
        // {
        //     if(isSum(i)==S)
        //     {
        //         maxi = max(maxi,isSum(i));
        //     }
        // }
        // string str = to_string(maxi);
        // return str;
        
        if(S>N*9 || (S==0 && N>1)) return "-1";
        string ans="";
        while(N--){
            if(S>9){
                ans+="9";
                S-=9;
            }
            else{
                if(S!=0){
                    string tmp = to_string(S);
                    ans+=tmp;
                    S=0;
                }
                else
                    ans+="0";
            }
        }
        return ans;
    }
};
