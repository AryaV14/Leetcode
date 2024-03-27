class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int n=s.size();
        int left=0;
        int right=0;
        int i=0;
        while(i<n){
            while(i<n && s[i]==' ')i++;
            if(i==n)break; // to stop index going out of bounds
            while(i<n && s[i]!=' '){
                s[right++]=s[i++];
            }
            reverse(s.begin()+left,s.begin()+right);
            s[right++]=' ';
            left=right;
            i++;
        }
        s.resize(right-1);
        return s;
    }
};

// class Solution {
// public:
//     string reverseWords(string s) {
//         string rev;
//         stringstream ss(s);
//         string word;
//         while (ss >> word) {
//             rev.insert(0,word);
//             rev.insert(0," ");
//         }
//         rev.erase(0,1);
//         return rev;  
//     }
// };

