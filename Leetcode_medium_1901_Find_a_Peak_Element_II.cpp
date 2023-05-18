class Solution {
public:
        // phir se kro
  
     int findMax(vector<vector<int>>mat, int r){
        int maxi=INT_MIN;
        int res_idx=-1;
        for(int i=0;i<mat[0].size();i++){
            if(mat[r][i]>maxi){
                maxi=mat[r][i];
                res_idx=i;
            }

        }
        return res_idx;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        // phir se kro
        int low=0;
        int high=mat.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int col_idx=findMax(mat,mid);
            if(mid==0){
                if(mat[mid+1][col_idx]<mat[mid][col_idx])
                    return {mid,col_idx};
            }
            else if(mid==mat.size()-1){
                if(mat[mid-1][col_idx]<mat[mid][col_idx])
                    return {mid,col_idx};
            }
            else{
                if((mat[mid+1][col_idx]<mat[mid][col_idx]) && (mat[mid-1][col_idx]<mat[mid][col_idx])){
                    return {mid,col_idx};
                }
            }

            //binary search for row if mat[mid][col_idx]<mat[mid+1][col_idx] move down else up

            if(mat[mid][col_idx]<mat[mid+1][col_idx]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return {-1,-1};
    }
};
