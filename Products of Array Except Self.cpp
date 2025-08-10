class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> res (nums.size(), 1);

        int prefix = 1;
        for(int i=0; i<nums.size()-1; i++){
            res[i+1] = prefix * nums[i];
            prefix*= nums[i];

        }

        int sufix = 1;
        for(int i=nums.size()-1; i>0; i--){
            res[i-1] *= sufix * nums[i];
            sufix *= nums[i];
        }

        return res;
    }
};
