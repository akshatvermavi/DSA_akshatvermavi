class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code herep
	    unordered_map<int, int>mp;
	    for(int i=0;i<n;i++)
	    {
	        mp[arr[i]]++;
	    }
	    for(auto j:mp)
	    {
	        if(j.first==x)
	            return j.second;
	    }
	    return 0;
	}
};
