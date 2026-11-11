class Solution {
public:
    struct SortMap {
        bool operator()(pair<int, int> a, pair<int, int> b) {
            return a.second < b.second;
        }
    };

    vector<int> topKFrequent(vector<int>& nums, int k) {
       map <int, int> m;
       priority_queue <pair<int, int>, vector<pair<int, int>>, SortMap> pq;

       for (auto v : nums) {
            m[v]++;
       } 
       vector <int> res;
       for (auto v : m) {
            pq.push(v);
       }
       for (int i = 0; i < k; i++) {
            res.push_back(pq.top().first);
            pq.pop();
       }
       return res;

    }
};
