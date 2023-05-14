// class Solution {
// public:
//     bool isAlphaNumeric(string str) {
 
// // Regex to check valid  alphanumeric String.
//   const regex pattern("^(?=.*[a-zA-Z])(?=.*[0-9])[A-Za-z0-9]+$");
 
// // If the string
 
// // is empty return false
//   if (str.empty())
//   {
//     return false;
//   }
 
 
// // Return true if the String
 
// // matched the ReGex
 
// if (regex_match(str, pattern))
// {
// return true;;
// }
// else
// {
//   return false;
// }
// }
//     bool isPalindrome(string str) {
//       long long i=0, j = str.size() -1;
//       while(i<j)
//       {
//           if(str[i]!=str[j] && isAlphaNumeric(str))
//           return "false";
//       }  
//       return "true";
//     }
// };

class Solution {
public:
 bool isPalindrome(string str) {
   int l=0, r = str.size();
   while(l<r)
   {
     if(!isalnum(str[l]))
     l++;
     else if(!isalnum(str[r]))
     r--;
     else if(tolower(str[l])!=tolower(str[r]))
     return false;
     else
     l++,r--;
   }
   return true;
 }
};
