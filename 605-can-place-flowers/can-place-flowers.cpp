class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i = 0, count = 0, result = 0,size=flowerbed.size();
        while (i < size) {
            if (flowerbed[i] == 1) {
                count = 0;
            }
            if (flowerbed[i] == 0) {
                count = count + 1;
            }
            if (count == 3 or(count==2 and i==1) or (count==2 and i==size-1)) {
                result = result + 1;
                count = 1;
            }
            i++;
        }
        if(size==1 and flowerbed[0]==0)
        {
            return true;
        }
        else if (n <= result) {
            return true;
        } else {
            return false;
        }
    }
};
  