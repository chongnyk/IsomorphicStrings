class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> sChars, tChars;
        int sCtr = 0, tCtr = 0;

        for(int i = 0; i < s.size(); i++){
            if(sChars.find(s[i]) == sChars.end()) sChars[s[i]] = sCtr++;
            if(tChars.find(t[i]) == tChars.end()) tChars[t[i]] = tCtr++;
            if(sCtr != tCtr) return false;
            if(sChars[s[i]] != tChars[t[i]]) return false;
        }

        return true;
    }
};
