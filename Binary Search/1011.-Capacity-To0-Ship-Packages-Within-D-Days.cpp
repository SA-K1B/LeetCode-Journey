class Solution {
public:
    int check(vector <int>& weights,int days,int x){
        int j = 0;
        int sum = 0;
        int c = 0;
        // cout<<weights.size()<<endl;
        while(j<weights.size()){
            if(weights[j]>x)
                return 0;
            if(sum+weights[j]<=x){
                sum += weights[j];
            }
            else{
                c++;
                sum = weights[j];
            }
            j++;
        }
        if(c<days){
            return 1;
        }
        else 
            return 0;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l = 1;
        int h = 25000000;
        while(l <= h){
            int mid = l+(h-l)/2;
            cout<<l<<' '<<h<<' '<<mid<<endl;
            if(check(weights,days,mid)){
                h = mid-1;
            }
            else
                l = mid+1;
        }
        return l;
    }
};