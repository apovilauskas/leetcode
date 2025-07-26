class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> ss, tt;

        if(s.size() != t.size()) return false;
        for(int i=0; i<s.size(); i++){
            ss[s[i]]++;
            tt[t[i]]++;
        }
        return tt == ss;

        //(O(n) time jei tas pats ilgis, O(1) space nes max 26 skirtingos raides
    }
};
