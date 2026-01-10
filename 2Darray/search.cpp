#include <iostream>
#include <vector>
using namespace std;

bool searchRow(vector<vector<int> >& matrix, int row, int target) {
    int n = matrix[0].size();
    int st = 0, end = n - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (matrix[row][mid] == target)
            return true;
        else if (matrix[row][mid] < target)
            st = mid + 1;
        else
            end = mid - 1;
    }
    return false;
}

bool searchMatrix(vector<vector<int> >& matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();

    int srow = 0, erow = m - 1;

    while (srow <= erow) {
        int mid = srow + (erow - srow) / 2;

        if (matrix[mid][0] <= target && matrix[mid][n - 1] >= target) {
            return searchRow(matrix, mid, target);
        }
        else if (target > matrix[mid][n - 1]) {
            srow = mid + 1;
        }
        else {
            erow = mid - 1;
        }
    }
    return false;
}

int main() {
vector<vector<int> > matrix;
matrix.push_back({1,2,3});
matrix.push_back({4,5,6});
matrix.push_back({7,8,9});

    int target = 3;

    if (searchMatrix(matrix, target))
        cout << "Found";
    else
        cout << "Not Found";
}
