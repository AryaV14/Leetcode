class Solution {
public:
    int candy(vector<int>& ratings) {
        int n= ratings.size();
        vector<int> candies(n,1);
        int total_candy=0;

        for(int i=1;i<n;i++)
        {
            if(ratings[i-1]<ratings[i])
            {
                candies[i]=candies[i-1]+1;
            }

        }
        for(int i=n-2;i>=0;i--)
        {
            if(ratings[i+1]<ratings[i])
            {
                candies[i]=max(candies[i],candies[i+1]+1);
            }

        }
        for(int i=0;i<n;i++)
        {
            total_candy+=candies[i];
        }
        return total_candy;

    }
};