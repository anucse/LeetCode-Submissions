class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n=nums.size();
        int dec=0;
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                dec++;
                if(dec>1 || i>=2 && i<=n-2 && nums[i]<nums[i-2] && nums[i-1]>nums[i+1])
                    return false;
            }
        }
        
        return true;
    }
};