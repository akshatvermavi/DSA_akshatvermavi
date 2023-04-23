//Method 02 by making pairs
class Solution {
public:
    int getid(vector<pair<int,string>>&v,int k){
        int st = 0,ed = v.size()-1;
        while(st<=ed){
            int mid = (st+ed)/2;
            if(v[mid].first==k)
                return mid;
            else if(v[mid].first<k)
                st = mid + 1;
            else
                ed = mid - 1;
        }
        return ed;
    }

    string intToRoman(int num) {
        vector<pair<int,string>>v{{1, "I"}
        ,{4, "IV"}
        ,{5, "V"}
        ,{9, "IX"}
        ,{10, "X"}
        ,{40, "XL"}
        ,{50, "L"}
        ,{90, "XC"}
        ,{100, "C"}
        ,{400, "CD"}
        ,{500, "D"}
        ,{900, "CM"}
        ,{1000, "M"}};
        
        string ans = "";
        while(num){
            int id = getid(v,num);
            ans += v[id].second;
            num -= v[id].first;
        }

        return ans;
    }
};
// Method 01 using string please visit once more
class Solution {
public:
    string intToRoman(int num) {
        string romanSymbols[] = {"H", "CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int values[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string ans="";
        for(int i=0;i<13;i++)
        {
            while(num>=values[i])
            {
                ans+=romanSymbols[i];
                num-=values[i];
            }

        }
        return ans;
    }
};
