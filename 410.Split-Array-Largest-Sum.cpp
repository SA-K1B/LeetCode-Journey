class Solution {
public:
    int check(vector <int>& nums, int k, int x){
        int j = 0;
        int sum = 0;
        int cnt = 0;
        while(j < nums.size()){
            if(nums[j] > x)
                return 0;
            if(sum + nums[j] <= x)
                sum += nums[j];
            else{
                sum = nums[j];
                cnt++;
            }
            j++;
        }
        if(cnt<k){
            return 1;
        }
        else 
            return 0;
    }
    int splitArray(vector<int>& nums, int k) {
        if(nums.size() == 1 && nums[0] == 0)
            return 0;
        int l = 1;
        int h = 1000000000;
        while(l<=h){
            int mid = l + (h-l)/2;
            cout<<l<<' '<<h<<' '<<mid<<endl;
            if(check(nums,k,mid)){
                h = mid - 1;
            }
            else
                l = mid + 1;
        }
        return l;
    }
};