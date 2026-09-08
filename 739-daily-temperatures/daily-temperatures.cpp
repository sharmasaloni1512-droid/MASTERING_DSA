class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> warmer(n);
        stack<pair<int,int> > s;

        for(int i = n - 1; i >= 0; i--){
            if(s.empty()){
                warmer[i] = 0;
                s.push({temperatures[i], i});
            }
            else{
                pair<int,int> temp = s.top();
                if(temperatures[i] < temp.first){
                    warmer[i] = temp.second - i;
                    s.push({temperatures[i], i});
                }
                else{
                    while(!s.empty() && temperatures[i] >= s.top().first){
                        s.pop();
                    }
                    if(s.empty()){
                        warmer[i] = 0;
                    }
                    else{
                        warmer[i] = s.top().second - i;
                    }

                    s.push({temperatures[i], i});
                }
            }
        }
        return warmer;
    }
};