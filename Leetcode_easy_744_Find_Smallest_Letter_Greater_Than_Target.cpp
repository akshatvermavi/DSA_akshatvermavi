class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        // int x = (int) target;
    
        // for(int i=0;i<letters.size();i++)
        // {
        //     int y = (int)letters[i];
        //     if(x<y && i==0)
        //     return letters[i];
        //     if(x<y && i>0)
        //     return letters[i-1];
        //     if(x==y && i+1<letters.size())
        //     return letters[i+1];
        // }
        // return letters[0];

        int n = letters.size();
        int l = 0;
        int h = n-1;
        if(target<letters[0])
        return letters[0];
        if(target >=letters[n-1]) 
        return letters[0];
        char ans;
        while(l<=h)
        {
            int mid =(l+h)/2;
            if(target <letters[mid])
            {
                ans = letters[mid];
                h = mid -1;

            }
            else
            l= mid +1;
        }
        return ans;
    }
};
