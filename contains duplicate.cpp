class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        
        std::set<int> s (nums.begin(), nums.end());
        return s.size()!=nums.size();
       // O(n) time, O(n) space

/*

        std::sort(nums.begin(), nums.end(), [](int a, int b){
            return a<b;
        });
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == nums[i+1])return true;
        }
        return false;
        //O(nlogn) time, O(1) space

*/


    }
};
