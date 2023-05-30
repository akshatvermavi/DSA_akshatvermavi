string m[31]={""};
class Solution {
public:
    //phir se kro
    string countAndSay(int n) {
        m[1]="1";
        string next,prev;
        int i,j,len;
		
		//generating the say(i)
        for(i=2;i<n+1;i++)
        {
            if(m[i]!="")
                continue;
            next="";
            prev=m[i-1];
            len=prev.size();
            int count=1;
			
			//reading out the say(i-1) i.i string prev
            for(j=1;j<len;j++)
            {
                if(prev[j-1]==prev[j])
                    count++;
                else
                {
                    next=next+to_string(count)+prev[j-1];
                    count=1;
                }
                
            }
            next=next+to_string(count)+prev[j-1];
            m[i]=next;
        }
        return m[n];
    }
};
