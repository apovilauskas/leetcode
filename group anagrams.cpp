class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
            std::unordered_map<std::string, std::vector<std::string>> res;

            for(int i=0; i<strs.size(); i++){

                std::vector<int> alphabet (26, 0);
                for(int j=0; j<strs[i].size(); j++){
                    alphabet[strs[i][j] - 'a']++;
                }

                std::string key;
                for(int k=0; k<alphabet.size(); k++){
                    key += ',' + std::to_string(alphabet[k]);
                }

                res[key].push_back(strs[i]);
            }
        
            std::vector<std::vector<std::string>> ans;
            for(auto i:res){
                ans.push_back(i.second);
            }

            return ans; 


    }
};
