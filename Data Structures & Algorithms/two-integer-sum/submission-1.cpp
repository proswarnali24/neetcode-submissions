class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();

        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            int need=target-nums[i];
            if(mpp.find(need)!=mpp.end()){
                return {mpp[need],i};
            }
            mpp[nums[i]]=i;
        }
        return {-1,-1};
        
        // int i=0; //it can't give the index properly 
        // int j=n-1;
        // while(i<j){
        //     if(nums[i]+nums[j]==target){
        //         return{i,j};
        //     }else if(nums[i]+nums[j]>target){
        //         j--;
        //     }else{
        //         i++;
        //     }
        // }

        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target){
        //             return {i,j};
        //         }
        //     }
        // }
    }
};
