class Solution {
public:
    int findMin(vector<int> &nums) {
        int sm = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i]< sm){
                sm = nums[i];
            }
        }
        return sm;
    }
};
