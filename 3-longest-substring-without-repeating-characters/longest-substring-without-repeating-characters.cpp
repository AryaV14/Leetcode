class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> sub;
        int length=0;
        int maxlen=0;
            for(int i=0;i<s.size();i++)
            {    
                int x=i;
                while(x<s.size()){
                    if(sub.find(s[x])==sub.end())
                    {
                        sub.insert(s[x]);
                        length++;
                        x++;
                        if(length>maxlen)
                            maxlen=length;
                    }
                    else{
                        length=0;
                        sub.clear();
                        break;
                    }
                                
            }
        }

        return maxlen;

    }
};