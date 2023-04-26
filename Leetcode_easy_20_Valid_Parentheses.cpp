//Method 01 via stack lifo SC = O(N) TC=O(N)
class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(int i=0;i<s.length();i++)
        {
            char ch = s[i];
            //opening bracket;
            if(ch == '(' || ch=='{' || ch=='[')
            {
                st.push(ch);
            }
            else{
                //closing bracket
                if(!st.empty())
                {
                    char topch = st.top();
                    if(ch == ')' && topch=='(')
                    st.pop();
                    else if(ch == '}' && topch=='{')
                    st.pop();
                    else if(ch == ']' && topch=='[')
                    st.pop();
                    else
                    return false;

                }
                else
                return false;
            }
        }
        if(st.empty())
        return true;
        else
        return false;
    }
};
// method 2 give runtime error
class Solution {
public:
    bool isValid(string s) {
        int flag =0,flag1=0;
     for(int i=0;i<s.size();i+=2)
     {
         if(s[i+1]-s[i]==1)
        flag =1;
     } 
     for(int i=0;i<s.size()-2;i+=3)
     {
         if(abs(s[i]-s[i-1])==abs(s[i+2]-s[i+1]))
        flag1 =1;
     }  
     if(flag ==1)
     return true;
     else if(flag1==1)
     return true;
     else
     return false;
    }
};
