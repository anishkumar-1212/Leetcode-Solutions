class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int area = 0;
        int curr_area = 0;
        int i=0;
        int j = n - 1;
        while(i<j) {
            int width = j - i;
            curr_area = width * min(height[i], height[j]);
            area = max(area, curr_area);

            if(height[i]<=height[j]){
                i++;
            }else{
                j--;
            }
        }
        return area;
    }
};
