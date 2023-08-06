class Solution{
    public:
    //Complete this function
        //Complete this function
 int factor(int x){
       if(x==1){
           return 1;
       }
       return x*factor(x-1);
   }
    vector<string> permutation(string s)
    {
        //Your code here
        vector<string>v;
        sort(s.begin(),s.end());
        int x=s.size();
        int m=factor(x);
        v.push_back(s);
        while(m>1){
            next_permutation(s.begin(), s.end());
            v.push_back(s);
            m--;
        }
        sort(v.begin(),v.end());
        return v;
    }
};
