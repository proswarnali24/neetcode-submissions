class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        // sort(nums.begin(),nums.end()); 
        // for(int i=1;i<n;i++){
        //     if(nums[i-1]==nums[i]){
        //         return true;
        //     }
        // }
        // return false;
        unordered_map<int,int> mpp;

        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        
        for(auto it: mpp){
            if(it.second>1){
                return true;
            }
        }
        return false;
        // for(int i=0;i<n;i++){
        //     int cnt=0;
        //     for(int j=i;j<n;j++){
        //         if(nums[i]==nums[j]){
        //             cnt++;
        //         }
        //     }
        //     if(cnt>1){
        //         return true;
        //     }
        // }
        // return false;
    }
};