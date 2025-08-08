class Solution {
public:

    string encode(vector<string>& strs) {

            std::string res;
            for(int i=0; i<strs.size(); i++){
                res+=std::to_string(strs[i].size())+'#'+strs[i];
            }
            return res;
    }

    vector<string> decode(string s) {
        int i=0;
        int j=0;
        std::vector<std::string> res;
        while(i< s.size()){
            int range;
            if(s[j]!='#')j++;
            else{
                range = std::stoi(s.substr(i, j-i));
                i=j+1;
                j= i+range;
                res.push_back(s.substr(i, range));
                i=j;
            }

        }


        return res;
    }
};
