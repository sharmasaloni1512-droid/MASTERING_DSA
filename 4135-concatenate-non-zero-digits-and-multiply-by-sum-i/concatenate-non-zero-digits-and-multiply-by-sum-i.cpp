class Solution {
public:
    long long sumAndMultiply(int n) {
        
        if(n == 0){
            return 0;
        }

        long long x;
        long long sum = 0;

        string s = "";

        while(n != 0){
            int temp = n % 10;
            if(temp!=0){
                sum += temp;
                s += to_string(temp);
            }
            n = n / 10;
        }

        x = stoll(s);
     
        long long rev = 0;

        while(x != 0){
            int temp = x % 10;
            rev = rev * 10 + temp;
            x = x / 10;
        }

        return rev * sum;
    }
};