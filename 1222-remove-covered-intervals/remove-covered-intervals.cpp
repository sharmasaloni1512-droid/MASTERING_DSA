class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        //Approach 1   
        int n = intervals.size();

        auto lambda = [](vector<int>& vec1, vector<int>& vec2){
            if(vec1[0] == vec2[0]){
                return vec1[1] > vec2[1];
            }
            return vec1[0] < vec2[0];
        };

        //Custon sorting 
        sort(intervals.begin(), intervals.end(), lambda);
        int lastIndex = intervals[0][1];
        int cnt = 1;
        
        for(int i = 1; i < n; i++){
            if(lastIndex >= intervals[i][1]){
                continue;
            }  
            lastIndex = intervals[i][1]; 
            cnt++;  
        }

        return cnt;
    }
};