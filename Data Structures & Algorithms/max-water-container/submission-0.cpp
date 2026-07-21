class Solution {
public:
    int maxArea(vector<int>& heights) {
        int size = heights.size();
        int area = 0;
        int max_area = 0;

        for (int i=0; i<size; i++) {
            for (int j=i+1; j<size; j++) {
                area = (j-i)*min(heights[i], heights[j]);
                if (area>max_area) {
                    max_area = area;
                }
            }
        }
        return max_area;
        
    }
};
