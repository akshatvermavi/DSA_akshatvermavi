class Solution {
public:
void removep(string & s, string & part)
    {
        //s.find(part) part ka main sting me present index bta deta hai
        int found = s.find(part);
        if(found!= string::npos)
        {
               //string::npos is usually used to indicate that no matches were found in the string
            //part string has been located
            //please remove it via left or right string ko concatinate kr do
            string left_part = s.substr(0,found);
            string right_part = s.substr(found+part.size(),s.size());
            s = left_part + right_part;
            removep(s,part);
        }
        else{
            //base case
            //all the occ of part has been removes from s
            return;
        }
    }
    string removeOccurrences(string s, string part) {
       removep(s,part);
       return s; 
    }
};

// Method solution has much optmize 
class Solution {
public:
    string removeOccurrences(string s, string part) 
    {
        while(s.size(),s.find(part)<s.size()){
            s.erase(s.find(part),part.length());
        }

        return s;
        
    }
};
