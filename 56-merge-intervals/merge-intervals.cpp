class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n= intervals.size();
        sort(intervals.begin(), intervals.end());
        for(int i=0;i<n; i++){
            if(ans.empty() || ans.back()[1] < intervals[i][0]){
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
        }
        return ans;




        // vector<vector<int>> temp;
        // int t=0;
        // sort(intervals.begin(), intervals.end());
        // temp = intervals;
        // for(int i=0;i<intervals.size();i++)
        // {
        //     if(temp[t][1]>=intervals[i][0] && temp[t][1]<=intervals[i][1])
        //     {
        //         temp[t][1]=intervals[i][1];
        //     }else if(temp[t][1]>=intervals[i][0] && temp[t][1]>=intervals[i][1])
        //     {
        //         continue;
        //     }

        //     else
        //     {
        //         t++;
        //         temp[t]= intervals[i];
        //     }
        // }
        // t++;
        // while(t<intervals.size())
        // {
           
        //     temp.erase(temp.begin() + t);
        //     t++;
        // }
        // return temp;
    }
};