class Solution {
public:
    int mySqrt(int x) {
        int l = 1;
        int h = x;
        while(l <= h){
            long long int mid = l+(h-l)/2;
            if((mid*mid)<=x && ((mid+1)*(mid+1))>x){
                return mid;
            }
            else if((mid*mid)<x)
                l = mid+1;
            else 
                h = mid-1;
        }
        return 0;
    }
};