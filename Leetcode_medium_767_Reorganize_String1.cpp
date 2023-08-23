// class Solution {
// public:
//     string reorganizeString(string s) {
//         // int l =0;
//         //  int h = s.size() -1;
//         //  vector<string> vrr;
//         //  while(l<h)
//         //  {
//         //      if(s[l]!=s[h])
//         //      {
//         //          vrr.insert(s[l]);
//         //          l++;
//         //          vrr.insert(s[h]);
//         //          h--;
//         //      }
//         //  }
//         // return vrr(vrr.begin(),vrr.end());
//         int hash[26] ={0};
//         for(int i=0;i<s.size();i++){
//             hash[s[i] - 'a']++;
//         }
//         //find the most frequent char
//         char max_freq_char; 
//         int max_freq = INT_MIN;
//         for(int i=0;i<26;i++)
//         {
//             if(hash[i]>max_freq)
//             {
//                 max_freq = hash[i];
//                 max_freq_char = i + 'a';
//             }
//         } 
//         int index = 0;
//         while(max_freq >0 &&  index< s.size())
//         {
//             s[index] = max_freq_char;
//             max_freq--;
//             index += 2;
//         }
//         if(max_freq != 0)
//         {
//             return "";
//         }
//         hash[max_freq_char -'a'] = 0;
//         for(int i=0;i<26;i++)
//         {
//             while(hash[i] > 0)
//             {
//                 index = index >= s.size() ? 1 : index;
//                 s[index] = i + 'a';
//                 hash[i]--;
//                 index += 2;

//             }

//         }
//         return s;
//     }
// };
class node{
    public:
    char data;
    int count;
    node(char d , int c)
    {
        data =d;
        count = c;

    }
};
class compare{
    public:
    bool operator()(node a , node b)
    { 
        return a.count < b.count;
    }
};
class Solution {
public:
 string reorganizeString(string s) {
        int freq[26] = {0};
        for(int i=0;i<s.size();i++)
        {
            char ch = s[i];
            freq[ch -'a']++;
        }
        priority_queue<node, vector<node>, compare> maxHeap;
        for(int i=0;i<26;i++)
        {
            if(freq[i]!=0)
            {
                node temp(i+'a', freq[i]);
                maxHeap.push(temp);
            }
        }
        string ans ="";
        while(maxHeap.size()>1)
        {
            node first = maxHeap.top();
            maxHeap.pop();
            node second = maxHeap.top();
            maxHeap.pop();
            ans += first.data;
            ans += second.data;
            first.count--;
            second.count--;
            if(first.count!=0)
            {
                maxHeap.push(first);
            }
             if(second.count!=0)
            {
                maxHeap.push(second);
            }
        }
        if(maxHeap.size()==1)
        {
            node temp = maxHeap.top();
            maxHeap.pop();
            if(temp.count ==1)
            {
                ans+= temp.data;

            }
            else{
                return "";
            }
            
        }
        return ans;
     }
};  
