#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

void spiralOrder(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int top = 0;
    int left = 0;
    int right = n - 1;
    int bottom = n - 1;

    while (top != bottom && right != left)
    {
        for (int i = left; i <= right; i++)
        {
            cout << matrix[top][i] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            cout << matrix[i][right] << " ";
        }
        right--;
        for (int i = right; i >= left; i--)
        {
            cout << matrix[bottom][i] << " ";
        }
        bottom--;
        for (int i = bottom; i >= top; i--)
        {
            cout << matrix[i][left] << " ";
        }
        left++;
    }
}
int main()
{
    vector<vector<int>> x = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    spiralOrder(x);
}