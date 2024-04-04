class Solution {
public:
    int maxDepth(string s) {
     int mx_depth = 0;
     int curr_depth = 0;
      for(auto c: s){
          if(c=='(') curr_depth++;
          if(c==')'){
              mx_depth = max(mx_depth, curr_depth);
              curr_depth--;
          }
      }
      return mx_depth;   
    }
};
