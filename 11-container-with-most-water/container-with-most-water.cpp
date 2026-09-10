class Solution {
public:
// Optimised Approach - Using Two Pointer reductinf time complexity from O(n^2) to O(n)
//where Space complexity is still O(1)
    int maxArea(vector<int>& height) {
        int max_water = INT_MIN;
        int left = 0;
        int right = height.size() - 1;

        while(left < right){
            int h = min(height[left], height[right]);
            int width = right - left;
            int water = h * width;

            max_water = max(max_water, water);

            if(height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }

        }
        return max_water;
        
    }
};











// BRUTE FORCE APPROACH 
// Time Complexity  ~ O(n^2)
// Space Complexity ~ O(1)

// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int max_water = INT_MIN;

//         for(int i = 0; i < height.size(); i++){
//             for(int j = i + 1; j < height.size(); j++){
//                 int water_contained = min(height[i], height[j]) * (j - i);
//                 max_water = max(max_water, water_contained);
//             }
//         }
//         return max_water;
//     }
// };