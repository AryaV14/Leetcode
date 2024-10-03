class Solution {
public:
    int strStr(string haystack, string needle) {
        int index=0,i=0;
        if(haystack.length()<needle.length())
            return -1;
        while(index<=haystack.length()-needle.length())
        {
            if(haystack[index]!=needle[i])
                index++;
            else{
                int k=index;
                int j;
                for(j=0;j<needle.length();j++)
                {
                    if(haystack[k++]!=needle[j])
                    {    
                        index++;
                        break;
                    }
                }
                if(j==needle.length())
                    return index;
            }
        }
        return -1;
    }
};