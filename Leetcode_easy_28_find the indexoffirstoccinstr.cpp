//Method 01 thora sa error hai bhai dekhta hun baad me
class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.size();
        int n = needle.size();
       
        for(int i=0;i<h -n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(needle[j]!=haystack[i+j])
                {
                     break;
                }
               if(j == n-1)
               return i;
               if(n==m)
               {
                   
               }
            }
            
        }
        return -1;
    }
};

//Method 02 tepa hua hai
      
class Solution {
public:
    int strStr(string haystack, string needle) {
             int hLen = haystack.length();
        int nLen = needle.length();
        int nIndex = 0;
        for(int i=0; i<hLen; i++){
            // as long as the characters are equal, increment needleIndex
            if(haystack[i]==needle[nIndex]){
                nIndex++;
            }
            else{
                // start from the next index of previous start index
                i=i-nIndex;
                // needle should start from index 0
                nIndex=0;
            }
            // check if needleIndex reached needle length
            if(nIndex==nLen){
                // return the first index
                return i-nLen+1;
            }
        }
        return -1;
        
    }
};
