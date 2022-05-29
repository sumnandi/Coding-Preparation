// 73. Set Matrix Zero.cpp : Leetcode Question Link: https://leetcode.com/problems/set-matrix-zeroes/
//
#include <bits-stdc++.h>

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        int m = matrix.size();    // Number of Rows
        int n = matrix[0].size(); // Number of columns
        int row[m], col[n];

        //Initializing both row and col array with -1.
        memset(row, -1, sizeof(row));
        memset(col, -1, sizeof(col));

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    row[i] = 0;
                    col[j] = 0;
                }
            }
        }

        for (int i = 0; i < m; i++)
        {
            if (row[i] == 0)
            {
                for (int j = 0; j < n; j++)
                    matrix[i][j] = 0;
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (col[j] == 0)
            {
                for (int i = 0; i < m; i++)
                    matrix[i][j] = 0;
            }
        }
    }
};
