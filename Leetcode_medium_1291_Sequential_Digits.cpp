class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
    ios::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    vector<int> temp={12,23,34,45,56,67,78,89,123,234,345,456,567,678,789,1234,
    2345,3456,4567,5678,6789,12345,23456,34567,45678,56789,123456,234567,
    345678,456789,1234567,2345678,3456789,12345678,23456789,123456789};
    vector<int>ans;
    for(int i=0;i<temp.size();i++)if(temp[i]>=low&&temp[i]<=high)ans.emplace_back(temp[i]);
        return ans;
    }
};
