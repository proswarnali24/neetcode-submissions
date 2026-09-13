class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mpp;
        int n=strs.size();
        for(int i=0;i<n;i++){
            vector<int> count(26,0);
            string s=strs[i];
            for(auto c: s){
                count[c-'a']++;
            }

            string key=to_string(count[0]);
            for(int i=1;i<26;i++){
                key+= ','+to_string(count[i]);
            }
            mpp[key].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto it:mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
