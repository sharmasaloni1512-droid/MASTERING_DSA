class Solution {
public:
    int trap(vector<int>& height) {
        stack<int> s;
        int water = 0;
        for(int i = 0; i < height.size(); i++){
            while(!(s.empty()) && height[i] > height[s.top()]){
                int x = s.top();
                s.pop();

                if(s.empty()){
                    break;
                }

                int distance = i - s.top() - 1;
                int mini_height = min(height[i], height[s.top()]);
                water += distance * (mini_height - height[x]);
            }
            s.push(i);
        }
        return water;
    }
};