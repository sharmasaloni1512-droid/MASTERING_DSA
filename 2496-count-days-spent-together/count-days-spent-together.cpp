class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int aliceArriveMonth = stoi(arriveAlice.substr(0,2));
        int aliceLeaveMonth = stoi(leaveAlice.substr(0,2));

        int aliceArriveDate = stoi(arriveAlice.substr(3,5));
        int aliceLeaveDate = stoi(leaveAlice.substr(3,5));

        int BobArriveMonth = stoi(arriveBob.substr(0,2));
        int BobLeaveMonth = stoi(leaveBob.substr(0,2));

        int bobArriveDate = stoi(arriveBob.substr(3,5));
        int bobLeaveDate = stoi(leaveBob.substr(3,5));

        int aliceAdays = 0, aliceLdays = 0, BobAdays = 0, BobLdays = 0;

        for(int i = 0; i < aliceArriveMonth - 1; i++){
            aliceAdays += days[i];
        }

        aliceAdays += aliceArriveDate;

        for(int i = 0; i < aliceLeaveMonth - 1; i++){
            aliceLdays += days[i];
        }
        aliceLdays += aliceLeaveDate;

        for(int i = 0; i < BobArriveMonth - 1; i++){
            BobAdays += days[i];
        }

        BobAdays += bobArriveDate;

        for(int i = 0; i < BobLeaveMonth - 1; i++){
            BobLdays += days[i];
        }
        BobLdays += bobLeaveDate;

        return max(0,  min(BobLdays, aliceLdays) - max(BobAdays, aliceAdays) + 1);

    }
};