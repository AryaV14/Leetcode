class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len = flowerbed.size();
        int cnt = 0;
        for(int i=0; i<len; i++) {
            if(flowerbed[i] == 0) {
                int left = (i == 0 || flowerbed[i-1] == 0) ? 0 : 1;
                int right = (i == len - 1 || flowerbed[i+1] == 0) ? 0 : 1;
                if(left == 0 && right == 0) {
                    i++;
                    cnt++;
                    if(cnt >= n) return true;
                }
            }
        }
        return cnt >= n;
    }
};