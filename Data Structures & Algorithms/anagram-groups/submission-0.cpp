class Solution {
public:

    std::string sortString (std::string s) {
        std::sort(s.begin(), s.end()); 
        return s;
    }

    void hasInList(std::string &s, map<string, vector<string>> &m) {
        const string string_sorted = sortString(s);
        auto v = m.find(string_sorted);
        m[string_sorted].push_back(s);
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>> res;
       map <string, vector <string>> m;
       for (int i = 0; i < strs.size(); i++) {
            hasInList(strs[i], m);
       }
       for (auto v : m) {
            res.push_back(v.second);
       }
       return res;
    }
};
