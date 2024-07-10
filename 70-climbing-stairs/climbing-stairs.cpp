class Solution {
public:
    int climbStairs(int n) {
        
        if(n==0||n==1)
        {
            return 1;
        }
        int pre,cur,temp;
        pre=cur=1;
        for(int i=2;i<=n;i++)
        {
            temp=cur;
            cur+=pre;
            pre=temp;

        }
        return cur;
    }
};