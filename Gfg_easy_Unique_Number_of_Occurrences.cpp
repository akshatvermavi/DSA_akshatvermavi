//User function Template for C++
class Solution
{
    public:
    
        bool isFrequencyUnique(int n, int arr[])
    {
        sort(arr,arr+n);
        int count=1;
        vector<int> v;
        set<int> s;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==arr[i+1])
                count++;
            else
            {
                v.push_back(count);
                s.insert(count);
                count=1;
                if(v.size()!=s.size())
                    return false;
            }
        }
        return true;
    
        
    }
};
