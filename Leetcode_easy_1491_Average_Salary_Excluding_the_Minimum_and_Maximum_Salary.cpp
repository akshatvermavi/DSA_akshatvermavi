class Solution {
public:
    double average(vector<int>& salary) {
     sort(salary.begin(),salary.end());
     double sum =0;
     double count =salary.size();
     double avg; 
     
     if(count<=2)
     return 0;
     else
     {
        for(int i=1;i<count-1;i++)
        sum += salary[i];
     }
     avg = sum/(count-2);

     return avg; 
     
    }
};
