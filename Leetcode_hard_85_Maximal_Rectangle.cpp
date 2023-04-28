// class Solution {
// public:
// int largestRectangleArea(vector < int > & heights) {
//   int max_area = 0;
//   for (size_t i = 0; i < heights.size(); i++) {
//     for (size_t j = i; j < heights.size(); j++) {
//       int min_height = INT_MAX;
//       for (size_t k = i; k <= j; k++) {
//         min_height = min(min_height, heights[k]);
//       }
//       int newmin = min_height * (j - i + 1);
//       max_area = max(max_area, newmin);
//     }
//   }
//   return max_area;
// }
//     int maximalRectangle(vector<vector<char>>& matrix) {
        
//         int n =matrix.size();
//         int m = matrix[0].size();
//         int maxarea =0;
//         vector<int> heights(m,0);
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 if(matrix[i][j]!=0)heights[j]++;
//                 else
//                 heights[j]=0;
               
//             }
//                 int area = largestRectangleArea(heights);
//                 int maxarea = max(area, maxarea); 
//         }
//         return maxarea;
//     }
// };

// Maximal Rectangle
    // tab
        class Solution {
        public:
            int largestRectangleArea(vector < int > & histo) {
            stack < int > st;
            int maxA = 0;
            int n = histo.size();
            for (int i = 0; i <= n; i++) {
                while (!st.empty() && (i == n || histo[st.top()] >= histo[i])) {
                int height = histo[st.top()];
                st.pop();
                int width;
                if (st.empty())
                    width = i;
                else
                    width = i - st.top() - 1;
                maxA = max(maxA, width * height);
                }
                st.push(i);
            }
            return maxA;
            }
            int maximalRectangle(vector<vector<char>>& matrix) {
                int maxiArea = 0, n = matrix.size(), m = matrix[0].size();
                vector<int> height(m,0);
                
                for(int i=0;i<n;i++){
                    for(int j=0;j<m;j++){
                        if(matrix[i][j] == '1') height[j]++;
                        else height[j] = 0;
                    }   
                    int area = largestRectangleArea(height);
                    maxiArea = max(maxiArea,area);
                }
                return maxiArea;
            }
        };
