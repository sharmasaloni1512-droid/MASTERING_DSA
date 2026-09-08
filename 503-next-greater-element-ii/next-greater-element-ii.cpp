class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> nextGreater(n);
        vector<int> nums1 = nums;
        stack<int> s;

        for(int i = 0; i < n; i++){
            nums1.push_back(nums[i]);
        }

        for(int i = nums1.size() - 1; i >= 0; i--){
            if(i >= n){
                if(s.empty()){
                    s.push(nums1[i]);
                }
                else{
                    if(nums1[i] < s.top()){
                        s.push(nums1[i]);
                    }
                    else{
                        while(!s.empty() && nums1[i] >= s.top()){
                            s.pop();
                        }
                        s.push(nums1[i]);
                    }
                }
            }

            else{
                if(s.empty()){
                    nextGreater[i] = -1;
                    s.push(nums1[i]);
                }
                else{
                    if(nums1[i] < s.top()){
                        nextGreater[i] = s.top();
                        s.push(nums1[i]);
                    }
                    else{
                        while(!s.empty() && nums1[i] >= s.top()){
                            s.pop();
                        }
                        if(s.empty()){
                            nextGreater[i] = -1;
                        }
                        else{
                            nextGreater[i] = s.top();
                        }
                        s.push(nums1[i]);
                    }
                }
            }
        }

        return nextGreater;
    }
};