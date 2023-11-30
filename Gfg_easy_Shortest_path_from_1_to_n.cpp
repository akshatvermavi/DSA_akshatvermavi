class Solution{   
public:
     int rec(int &ct,int n)
    {
        if(n==1) return ct;
        if(n%3==0){
        n = n/3;
        
        ct++;
        }
        else{
            n=n-1;
            ct++;
        }
        return rec(ct,n);
    }
    int minimumStep(int n){
        //complete the function here
        int ct =0;
        rec(ct,n);
        return ct;
    }
};
