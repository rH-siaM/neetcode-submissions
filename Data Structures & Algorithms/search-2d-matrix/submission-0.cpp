class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> arr;

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                arr.push_back(matrix[i][j]);
             }
        }

    int size = arr.size();
            int left = 0;
            int right = size-1;
        
            while (left<=right) {
                int middle = left+(right-left)/2;
                if(arr[middle] == target) {
                    return true;
                }
                if (arr[middle] < target) {
                    left = middle+1;
                } else {
                    right = middle-1;
                }
            }
        return false;
    }
};
