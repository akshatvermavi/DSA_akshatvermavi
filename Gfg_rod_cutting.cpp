class Solution{
  public:
    int cutRod(int price[], int n) {
        //code here
        int N = n+1;
        int arr[N][N];
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                arr[i][j] = 0;
                arr[i][j] = 0;
            }
        }
        for(int i = 1; i < N; i++){
            for(int j = 1; j < N; j++){
                int curPrice = price[i-1];
                if(i > j){
                    arr[i][j] = arr[i-1][j];
                }else{
                    int pre = arr[i-1][j];
                    int newPrice = curPrice + arr[i][j-i];
                    arr[i][j] = max(pre, newPrice);
                }
            } 
        }
        
        return arr[N-1][N-1];
    }
};
