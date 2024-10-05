class Solution {
public:
    int lengthOfLastWord(string s) {
      int len=s.length(),count=0;
      int i=len-1;
      while(i>=0&&s[i]==' '){
        i--;
      }
      for(;i>=0;i--)
      {
        if(s[i]==' ')
            break;
        count++;
      }  
      return count;
    }
};