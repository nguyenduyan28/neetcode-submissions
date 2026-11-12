class Solution {
public:
string encode(vector<string>& strs) {
  string res;
  for (const auto& v : strs) {
    res.append(std::to_string(static_cast<int>(v.size())));
    res.push_back('#');
    for (auto ch : v) {
      res.push_back(ch);
    }
  }
  return res;
}

vector<string> decode(string s) {
  vector<string> res;
  for (int i = 0; i < s.size();) {
    int separator_idx = s.find('#', i);
    // cout << "current i: " << i << '\n';
    // cout << "seperate_idx: " << separator_idx << '\n';
    // cout << "expected num: " << s.substr(i, separator_idx - i) << '\n';
    int num = stoi(s.substr(i, separator_idx - i));
    string temp = s.substr(separator_idx + 1, num);
    res.push_back(temp);
    i = separator_idx + num + 1;
  }
  return res;
}
};
