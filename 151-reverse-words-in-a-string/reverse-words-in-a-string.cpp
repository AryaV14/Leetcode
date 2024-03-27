class Solution {
public:
    string reverseWords(string s) {
        string rev;
        stringstream ss(s);
        string word;
        while (ss >> word) {
            rev.insert(0,word);
            rev.insert(0," ");
        }
        rev.erase(0,1);
        return rev;  
    }
};