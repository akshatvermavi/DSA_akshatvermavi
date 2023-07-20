class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       unordered_map<char, int> mp;
       //int j =0;
       for(auto i:S)
       {
           mp[i]++;
          
       }
       for(auto i:S)
       {
          
           
           if(mp[i]==1){
           return i;
           break;
           }
           
          
       }
       
      return '$';
    }

};
