class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int longest = 1;
        int cnt_curr = 0;
        int last_smaller = INT_MIN;

        if(nums.size() == 0) return 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] - 1 == last_smaller){
                cnt_curr += 1;
                last_smaller = nums[i];
            }
            else if(nums[i] != last_smaller){
                cnt_curr = 1;
                last_smaller = nums[i];
            }
            longest = max(longest, cnt_curr);
        }
        return longest; 
    }
};
