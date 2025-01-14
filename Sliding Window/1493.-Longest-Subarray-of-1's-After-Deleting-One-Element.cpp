class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int N = nums.size();
        int ans = 0;
        int cnt = 0;
        int f = 0;
        while(j<N){
            if(nums[j]==1)
                cnt++;
            else{
                if(f==1){
                    while(nums[i]!=0){
                        i++;
                        cnt--;
                    }
                    i++;
                }
                f=1;
            }    
            j++;
            ans = max(ans,cnt);    
        }
        if(ans == nums.size())
            ans--;
        return ans;
    }
};