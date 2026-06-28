class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int area =0;
        while (left < right){
            int width = right - left ;
            int height= min(heights[left],heights[right]);
            int current_area= width * height ;
            area=max(current_area,area);
            if(heights[left] > heights[right]) right--;
            else left++;
        }
        return area;
    }
};
