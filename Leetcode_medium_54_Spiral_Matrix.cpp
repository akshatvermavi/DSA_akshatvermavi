class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        // int m = matrix.size();
        // int n = matrix[0].size();
        // int totalelem = m*n;
        // int srow =0;
        // int ecol = m-1;
        // int scol = 0;
        // int erow = n-1;
        // int count =0;
        // while(count<=totalelem){
        // for(int i=scol;i<ecol && count<=totalelem;i++){
        // ans.push_back(matrix[srow][i]);
        // count++;}
        // srow++;
        // for(int i=srow;i<=erow && count<=totalelem;i++){
        // ans.push_back(matrix[i][ecol]);
        // count++;}
        // ecol--;
        // for(int i=ecol;i>=scol && count<=totalelem;i--){
        // ans.push_back(matrix[erow][i]);
        // count++;}
        // erow--;
        // for(int i=erow;i>=scol && count<=totalelem;i--){
        // ans.push_back(matrix[i][scol]);
        // count++;}
        // scol++;
        // }
        // return ans;


        

         int m=matrix.size(), n=matrix[0].size();
        
        int left = 0, right = n-1;
        int top = 0, bottom = m-1;
        
        vector<int> res;
         
        while(left<=right && top<=bottom){
            
            for(int i=left; i<=right; i++){
                res.push_back(matrix[top][i]);
            }
            top++;
            
            for(int i=top; i<=bottom; i++){
                res.push_back(matrix[i][right]);
            }
            right--;
            
			// Check if elements are left in the last row
            if(top<=bottom){
                for(int i=right; i>=left; i--){
                    res.push_back(matrix[bottom][i]);
                }
                bottom--;                
            }

			// Check if elements are left in the last col
            if(left<=right){
                 for(int i=bottom; i>=top; i--){
                    res.push_back(matrix[i][left]);
                }
                left++;   
            }            
        }
        
        return res;
    }
};
