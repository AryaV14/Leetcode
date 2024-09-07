class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_surplus=0;
        int surplus=0;
        int start=0;
        int n=gas.size();
        for(int i=0;i<n;i++)
        {
            total_surplus += gas[i]-cost[i];
            surplus += gas[i]-cost[i];
            if(surplus<0)
            {
                surplus=0;
                start=i+1;
            }
        }
        return (total_surplus < 0)? -1:start;
    }
};