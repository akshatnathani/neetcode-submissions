class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 1;
        int maxi = 1;
        if(nums.size() <1) return 0;
        else if (nums.size() == 1) return 1;

        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i+1] == nums[i]+1){
                count++;
                maxi = max(count, maxi);
            } else if (nums[i+1] == nums[i]){
                continue;
            } else {
                count = 1;
            }
        }

        return maxi;
    }
};
