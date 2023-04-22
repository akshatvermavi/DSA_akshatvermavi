//Method 01: greedy approach using hash array TC = O(N) SC = O(26)
class Solution {
public:
    string reorganizeString(string s) {
        // int l =0;
        //  int h = s.size() -1;
        //  vector<string> vrr;
        //  while(l<h)
        //  {
        //      if(s[l]!=s[h])
        //      {
        //          vrr.insert(s[l]);
        //          l++;
        //          vrr.insert(s[h]);
        //          h--;
        //      }
        //  }
        // return vrr(vrr.begin(),vrr.end());
        int hash[26] ={0};
        for(int i=0;i<s.size();i++){
            hash[s[i] - 'a']++;
        }
        //find the most frequent char
        char max_freq_char;
        int max_freq = INT_MIN;
        for(int i=0;i<26;i++)
        {
            if(hash[i]>max_freq)
            {
                max_freq = hash[i];
                max_freq_char = i + 'a';
            }
        } 
        int index = 0;
        while(max_freq >0 &&  index< s.size())
        {
            s[index] = max_freq_char;
            max_freq--;
            index += 2;
        }
        if(max_freq != 0)
        {
            return "";
        }
        hash[max_freq_char -'a'] = 0;
        for(int i=0;i<26;i++)
        {
            while(hash[i] > 0)
            {
                index = index >= s.size() ? 1 : index;
                s[index] = i + 'a';
                hash[i]--;
                index += 2;

            }

        }
        return s;
    }
};

// Method 02 via priority queue to be solve

//method 01 using two ptr but not able to solve
