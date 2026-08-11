class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    priority_queue<pair<int,int>> count;       //heap
    vector<int> res;

        for(auto x: nums){
           freq[x]++;
        }

        for(auto x : freq){
            count.push({x.second, x.first});
        }

        while(k--){
            res.push_back(count.top().second);
            count.pop();
        }

        return res;
    }
};
