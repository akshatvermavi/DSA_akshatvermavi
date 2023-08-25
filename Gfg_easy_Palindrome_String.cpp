class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int s=0;
	    int e = S.size()-1;
	    while(s<=e)
	    {
	        if(S[s]!=S[e])
	            return 0;
	        s++;
	        e--;
	    }
	    return 1;
	   //for(int i=0;i<S.size();i++)
	   //{
	   //    if(S[i]!=S[S.size()-1-i])
	   //    return 0;
	   //}
	   //return 1;
	}

};
