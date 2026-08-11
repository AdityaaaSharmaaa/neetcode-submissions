class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> umap;
        vector<vector<string>> res;

        for(auto x: strs){
            string tp = x;
            sort(x.begin(), x.end());
            umap[x].push_back(tp);
        }

        for(auto x: umap){
            res.push_back(x.second);
        
        }
        return res;
    }
};
