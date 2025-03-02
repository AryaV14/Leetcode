class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        vector<vector<string>> groups;
        for(int i=0;i<strs.size();i++)
        {
            res[countsort(strs[i])].push_back(strs[i]);
        }
        for( auto p : res)
        {
            groups.push_back(p.second);
        }
        return groups;
    }
private:
    string countsort(string s){
        int count[26] = {0};
        for(int i=0;i<s.size();i++)
            count[s[i]-'a']++;
        string t;
        for(int i=0;i<26;i++)
        {
            t += string(count[i], i+'a');
        }
        return t;
    }
};