class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if (r * c != mat.size() * mat[0].size())
            return mat;
        vector<int> arr;
        for (int i = 0; i < mat.size(); ++i) {
            for (int j = 0; j < mat[0].size(); ++j) {
                arr.push_back(mat[i][j]);
            }
        }
        vector<vector<int>> result(r, vector<int>(c));
        for (int k = 0; k < arr.size(); ++k) {

            result[k / c][k % c] = arr[k];
        }
        return result;
    }
};