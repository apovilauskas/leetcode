class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> s (nums.begin(), nums.end());

        int maxx = 0;
        for(int i:s){
            if(s.find(i-1) != s.end()){
                continue;
            }

            int length = 1;
            while(s.find(i+length) != s.end()){
                length++;
            }

            maxx = std::max(length, maxx);
        }

        return maxx;
    }
};
