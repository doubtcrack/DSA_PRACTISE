// Set Zeroes Matrix

#include <bits/stdc++.h> 
void setZeros(vector < vector < int >> & matrix) {
  int col0 = 1, rows = matrix.size(), cols = matrix[0].size();
  for (int i = 0; i < rows; i++) {
      if (matrix[i][0] == 0) col0 = 0;
    for (int j = 1; j < cols; j++) {
      if (matrix[i][j] == 0) {
        matrix[i][0] = 0;
        matrix[0][j] = 0;
      }
    }
  }
    // for (int i = 0; i < rows; i++) {
    // for (int j = 0; j < cols; j++) {
    //     cout<<matrix[i][j]<<" ";
    // } cout<<"\n";}
  for (int i = rows - 1; i >= 0; i--) {
    for (int j = cols - 1; j >= 1; j--) {
      if (matrix[i][0] == 0 || matrix[0][j] == 0) {
        matrix[i][j] = 0;
      }
    }
    if (col0 == 0) {
      matrix[i][0] = 0;
    }
  }
}


// Sample Input 1 :
// 2
// 2 3
// 7 19 3
// 4 21 0
// 3 3
// 1 2 3
// 4 0 6
// 7 8 9

// Sample Output 1 :
// 7 19 0
// 0 0 0
// 1 0 3
// 0 0 0
// 7 0 9