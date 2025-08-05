class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> m;
        for(auto i:nums){
            m[i]++;
        }

        std::vector<std::vector<int>> freq(nums.size()+1);
        for(auto i:m){
            freq[i.second].push_back(i.first);
        }

        std::vector<int> res;
        for(int i=freq.size()-1; i>0; i--){
            for(int j=0; j<freq[i].size(); j++){
                if(res.size() < k){
                    res.push_back(freq[i][j]);
             }
            }
             
        }
       
        return res;

    }
};
