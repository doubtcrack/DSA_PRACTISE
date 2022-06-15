#include <bits/stdc++.h> 
    void setZeros(vector < vector < int >> & matrix) {
  int rows = matrix.size(), cols = matrix[0].size();
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (matrix[i][j] == 0) {

        int ind = 0;
        while (ind < rows) {
          if (matrix[ind][j] != 0) {
            matrix[ind][j] = INT_MIN+1;
          }
          ind++;
        }
        ind = 0;
        while (ind < cols) {
          if (matrix[i][ind] != 0) {
            matrix[i][ind] = INT_MIN+1;

          }
          ind++;
        }
      }
    }
  }
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (matrix[i][j] == INT_MIN+1) {
        matrix[i][j] = 0;
      }
    }
  }

};